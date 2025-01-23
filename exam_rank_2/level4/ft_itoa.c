#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	char *pt;
	int i = 0;
	long int n = nbr;
	int sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
		i++;
	}
   	long temp = n;
    while (temp)
    {
        temp = temp / 10;
        i++;
    }
	pt = malloc(i + 1);
	if (pt == NULL)
		return (NULL);
	pt[i--] = '\0';
	if (n == 0)
		pt[0] = '0';
	if (sign == 1)
		pt[0] = '-';
	while (i >= 0 && n)
	{
		pt[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (pt);
}
int main()
{
	printf("%s", ft_itoa(-2147483648));
}

