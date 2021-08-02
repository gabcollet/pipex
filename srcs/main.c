/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:54:02 by gcollet           #+#    #+#             */
/*   Updated: 2021/08/02 17:01:58 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"


void error()
{
	perror("Error");
	exit(-1);
}

void	free_all(char ***arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while ((*arr)[i])
	{
		free(*arr[i]);
		i++;
	}
	free(*arr);
	*arr = NULL;
}

char *find_path(char *cmd, char **envp)
{
	char **paths;
	char *path;
	int i;
	char	*part_path;
	
	i = 0;
	paths = ft_split(envp[3] + 5, ':');
	while (paths[i])
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, cmd);
		free(part_path);
		if (access(path, F_OK) == 0)
			return (path);
		i++;
	}
	return (0);
	free_all(&paths);
}

//check permission with access for files because if it cant be open it will send back erno
//valider que ca fait bien une erreur si le fichier de lecture n'existe pas

int main(int argc, char **argv, char **envp)
{
	int fd[2];
	int pid1;
	int pid2;
	char **cmd;
	int file;
	
	argc = 0; //faire en sorte que si il y a pas assez d'arg display un error
	
	if (pipe(fd) == -1)
		error();
	pid1 = fork();
	if (pid1 == -1)
		error();
	if(pid1 == 0)
	{
		//child process 1
		dup2(fd[1], STDOUT_FILENO);
		close(fd[0]);
		close(fd[1]);
		cmd = ft_split(argv[1], ' ');
		if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
			error();
		free_all(&cmd);
	}
	pid2 = fork();
	if (pid2 == -1)
		error();
	if(pid2 == 0)
	{
		//child process 2
		file = open(argv[3], O_WRONLY | O_CREAT, 0777);
		if (file == -1)
			error();
		dup2(fd[0], STDIN_FILENO);
		dup2(file, STDOUT_FILENO);
		close(fd[0]);
		close(fd[1]);
		cmd = ft_split(argv[2], ' ');
		if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
			error();
		free_all(&cmd);
	}
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}