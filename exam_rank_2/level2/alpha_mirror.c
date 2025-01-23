#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int j;
		char alph1[] = "abcdefghijklmnopqrstuvwxyz";
		char alph2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (alph1[j] != argv[1][i])
					j++;
				argv[1][i] = alph1[1 + (24 - j)];
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (alph2[j] != argv[1][i])
					j++;
				argv[1][i] = alph2[1 + (24 - j)];
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
