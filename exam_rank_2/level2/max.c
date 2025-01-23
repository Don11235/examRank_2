int 	max(int *tab, unsigned int len)
{
	int max;
	int i = 1;

	if (len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>

int main()
{
	int arr[5] = {1, 42, -5, 23, 0};
	printf("%d", max(arr, 5));
}