/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:54:02 by gcollet           #+#    #+#             */
/*   Updated: 2021/08/09 16:29:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	child_process(char **argv, char **envp, int *fd)
{
	int		filein;
	char	**cmd;

	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
		error();
	dup2(fd[1], STDOUT_FILENO);
	dup2(filein, STDIN_FILENO);
	close(fd[0]);
	cmd = ft_split(argv[2], ' ');
	if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
		error();
	free_all(&cmd);
}

void	parent_process(char **argv, char **envp, int *fd)
{
	int		fileout;
	char	**cmd;

	fileout = open(argv[4], O_WRONLY | O_CREAT, 0777);
	if (fileout == -1)
		error();
	dup2(fd[0], STDIN_FILENO);
	dup2(fileout, STDOUT_FILENO);
	close(fd[1]);
	cmd = ft_split(argv[3], ' ');
	if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
		error();
	free_all(&cmd);
}

int	main(int argc, char **argv, char **envp)
{
	int	fd[2];
	int	pid1;

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			error();
		pid1 = fork();
		if (pid1 == -1)
			error();
		if (pid1 == 0)
			child_process(argv, envp, fd);
		waitpid(pid1, NULL, 0);
		parent_process(argv, envp, fd);
		close(fd[0]);
		close(fd[1]);
	}
	else
	{
		printf("\033[31mError: Bad arguments\n\e[0m");
		printf("Ex: ./pipex file1 cmd1 cmd2 file2\n");
	}
	return (0);
}
