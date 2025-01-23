int ft_atoi(const char *str)
{
	int sign = 1;
	int num = 0;
	while((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", atoi("+-124125478996111"));
	printf("%d", ft_atoi("+-124125478996111"));
}