#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i;
		int j;
		int flag;

		i = 0;
		j = 0;
		while (argv[1][i])
		{
			flag = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					flag = 1;
					j++;
					break;
				}
				j++;
			}
			if (flag == 0)
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "1", 1);
	}
	write(1, "\n", 1);
}
