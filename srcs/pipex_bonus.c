/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:33:51 by gcollet           #+#    #+#             */
/*   Updated: 2021/08/09 15:29:04 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	child_process(char *argv, char **envp)
{
	char	**cmd;
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) == -1)
		error();
	pid = fork();
	if (pid == -1)
		error();
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		cmd = ft_split(argv, ' ');
		if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
			error();
		free_all(&cmd);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		waitpid(pid, NULL, 0);
	}
}

void	parent_process(int argc, char **argv, char **envp)
{
	char	**cmd;

	cmd = ft_split(argv[argc - 2], ' ');
	if (execve(find_path(cmd[0], envp), cmd, envp) == -1)
		error();
	free_all(&cmd);
}

int	main(int argc, char **argv, char **envp)
{
	int	i;
	int	filein;
	int	fileout;

	i = 3;
	if (argc >= 5)
	{
		filein = open(argv[1], O_RDONLY, 0777);
		fileout = open(argv[argc - 1], O_WRONLY | O_CREAT, 0777);
		if (fileout == -1 || filein == -1)
			error();
		dup2(filein, STDIN_FILENO);
		dup2(fileout, STDOUT_FILENO);
		child_process(argv[2], envp);
		while (i < argc - 2)
			child_process(argv[i++], envp);
		parent_process(argc, argv, envp);
	}
	else
	{
		printf("\033[31mError: Missing argument\n\e[0m");
		printf("Ex: ./pipex file1 cmd1 cmd2 ... file2\n");
	}
	return (0);
}
