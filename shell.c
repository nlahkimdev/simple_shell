#include "shell.h"

/**
 * main - main entry to shell
 * @argc: count the commands send
 * @argv: take the command at index 0
 * Return: at 0, return success
 */

int main(int argc, char **argv, char **env)
{
	char *command = NULL;
	size_t buf = 0;
	ssize_t gt_rtval;
	pid_t fk_rtval, halt;
	char **av;
	
	while (1)
	{
		printf("#cisfun$ ");
		
		fk_rtval = fork();

		if (fk_rtval == -1)
		{
			printf("%s\n", strerror(errno));
		}
		else if (fk_rtval == 0)
		{
			gt_rtval = getline(&command, &buf, stdin);

			if (gt_rtval == -1)
				printf("%s\n", strerror(errno));

		execve(av[0], av, NULL);
		}

		wait(&halt);
	}
	
	return (0);
}
