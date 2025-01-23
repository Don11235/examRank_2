#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char arr1[256] = {0};
		char arr2[256] = {0};
		int i = 0;
		int j = 0;
		int k = 0;

		while (argv[2][i])
		{
			if (arr1[(unsigned)argv[2][i]] == 0)
				arr1[(unsigned)argv[2][i]] = 1;
			i++;
		}
		while (argv[1][j])
		{
			if (arr2[(unsigned)argv[1][j]] == 0)
				arr2[(unsigned)argv[1][j]] = 1;
			j++;
		}
		while (argv[1][k])
		{
			if (arr1[(unsigned)argv[1][k]] == 1 && arr2[(unsigned)argv[1][k]] == 1)
			{
				write(1, &argv[1][k], 1);
				arr1[(unsigned)argv[1][k]] = 0;
			}
			k++;
		}
	}
	write(1, "\n", 1);
}
