#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int count = 0;
		int count1 = 0;
		int i = 0;
		int j = 0;
		char *pt;
		while (argv[1][count])
		{
			if (argv[1][count] >= 'A' && argv[1][count] <= 'Z')
				count1++;
			count++;
		}
		count = count + count1;
		pt = malloc(count);
		if (pt == NULL)
			return (0);
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				pt[j++] = '_';
				pt[j] = argv[1][i] + 32;
			}
			else
				pt[j] = argv[1][i];
			i++;
			j++;
		}
		write(1, pt, count);
		write(1, "\n", 1);
		free (pt);
	}
}
