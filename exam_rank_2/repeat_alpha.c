#include <unistd.h>

int	search_and_write(char c, char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (arr1[i])
	{
		if (c == arr1[i] || c == arr2[i])
		{
			while (i+1)
			{
				write(1, &c, 1);
				i--;
			}
			return (1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		char *alpha_l = "abcdefghijklmnopqrstuvwxyz";
		char *alpha_up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		i = 0;
		while (argv[1][i])
		{
			if (search_and_write(argv[1][i], alpha_l, alpha_up) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
