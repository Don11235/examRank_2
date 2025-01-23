#include <stdlib.h>

int 	*ft_range(int start, int end)
{
	int *pt;
	int i;
	int range;

	i = 0;
	if (end < start)
		range = start - end + 1;
	else
		range = end - start + 1;
	pt = malloc(range * sizeof(int));
	if (pt == NULL)
		return (NULL);
	if (start <= end)
	{
		while (i < range)
		{
			pt[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i < range)
		{
			pt[i] = start - i;
			i++;
		}
	}
	return (pt);
}

#include <stdio.h>
int main()
{
	int i = 0;
	int *pt = ft_range(3, 3);
	while (i < 1)
	{
		printf("%d ", pt[i]);
		i++;
	}
}