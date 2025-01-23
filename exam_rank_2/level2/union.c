#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char arr[256] = {0};
		int i = 0;

		while (argv[1][i])
		{
			if (arr[(unsigned)argv[1][i]] == 0)
			{
				write(1, &argv[1][i], 1);
				arr[(unsigned)argv[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (arr[(unsigned)argv[2][i]] == 0)
			{
				write(1, &argv[2][i], 1);
				arr[(unsigned)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
