#include <unistd.h>

void putnbr(int n)
{
	char c;
	if (n / 10)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	i = i - 1;
	putnbr(i);
}
