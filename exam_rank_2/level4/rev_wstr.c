#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;
		int	j;

		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i > 0)
		{
			while (argv[1][i] != ' ' && i >= 0)
				i--;
			j = i;
			i++;
			while (argv[1][i] && argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			i = j - 1;
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
