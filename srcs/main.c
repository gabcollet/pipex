/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:54:02 by gcollet           #+#    #+#             */
/*   Updated: 2021/08/03 11:50:52 by gcollet          ###   ########.fr       */
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

void	child_process1(char **argv, char **envp, int *fd)
{
	int filein;
	char **cmd;
	
	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
		error();
	dup2(fd[1], STDOUT_FILENO);
	dup2(filein, STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
	cmd = ft_split(argv[2], ' ');
	if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
		error();
	free_all(&cmd);
}

void	child_process2(char **argv, char **envp, int *fd)
{
	int fileout;
	char **cmd;
	//child process 2
	fileout = open(argv[4], O_WRONLY | O_CREAT, 0777);
	if (fileout == -1)
		error();
	dup2(fd[0], STDIN_FILENO);
	dup2(fileout, STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	cmd = ft_split(argv[3], ' ');
	if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
		error();
	free_all(&cmd);
}


int main(int argc, char **argv, char **envp)
{
	int fd[2];
	int pid1;
	int pid2;
	
	if (argc >= 5)
	{
		if (pipe(fd) == -1)
			error();
		pid1 = fork();
		if (pid1 == -1)
			error();
		if(pid1 == 0)
			child_process1(argv, envp, fd);
		pid2 = fork();
		if (pid2 == -1)
			error();
		if(pid2 == 0)
			child_process2(argv, envp, fd);
		close(fd[0]);
		close(fd[1]);
		waitpid(pid1, NULL, 0);
		waitpid(pid2, NULL, 0);
	}
	else
	{
		printf("Error: Missing argument\n");
		printf("Ex: ./pipex file1 cmd1 cmd2 file2\n");	
	}
	return (0);
}
