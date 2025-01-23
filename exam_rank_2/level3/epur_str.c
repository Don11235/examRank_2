#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while (argv[1][j])
			j++;
		j--;
		while ((argv[1][j] == ' ' || argv[1][j] == '\t') && j >= 0)
			j--;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
			i++;
		while (i <= j)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				write(1, " ", 1);
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i <= j)
				i++;
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && i <= j)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}