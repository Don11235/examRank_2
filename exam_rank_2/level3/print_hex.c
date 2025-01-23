#include <unistd.h>
#include <stdio.h>

unsigned int ft_atoi(char *str)
{
	unsigned int nb = 0;
	unsigned int i = 0;

	while (str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}
void convert_base(int nb)
{
	int n;
	char base[16] = "0123456789abcdef";
	if (nb / 16)
		convert_base(nb / 16);
	n = nb % 16;
	write(1, &base[n], 1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		convert_base(num);
	}
	write(1, "\n", 1);
}