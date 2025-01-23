#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2 && argv[1][0] != '\0')
	{
		int i = 0;
		int j = 0;

		while (argv[1][i])
			i++;
		i--;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i >= 0)
			i--;
		j = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && i >= 0)
			i--;
		i++;
		while (i <= j)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
