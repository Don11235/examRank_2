#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i;
		int j;
		int len;

		i = 0;
		j = 0;
		len = ft_strlen(argv[1]);
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					len--;
					j++;
					break;
				}
				j++;
			}
			i++;
		}
		if (len == 0)
			write(1, argv[1], ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
}
