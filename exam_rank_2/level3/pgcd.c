#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		if (b == 0)
		{
			printf("%d", a);
			return (0);
		}
		int r = a % b;
		while (r)
		{
			a = b;
			b = r;
			r = a % b;
		}
		printf("%d", b);
	}
	printf("\n");
}