#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if(str[0] == '+')
		i++;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}
void putnbr(int nb)
{
	char c;
	if (nb / 10)
		putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int find_sum_prime(int nb)
{
	int sum;
	int i;
	int j;
	int prime;

	sum = 0;
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		j = 2;
		prime = 1;
		while (j <= i/2)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
			j++;
		}
		if (prime == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

int main(int argc, char *argv[])
{
	if (argc == 2 && argv[1][0] != '-')
	{
		int nb;
		int result;

		nb = ft_atoi(argv[1]);
		result = find_sum_prime(nb);
		putnbr(result);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
