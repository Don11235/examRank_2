#include <stdlib.h>

char *ft_strdup(char *src)
{
	char	*pt;
	int		i = 0;
	int		j = 0;

	while (src[i])
		i++;
	pt = malloc(i + 1);
	if (pt == NULL)
		return (NULL);
	while(src[j])
	{
		pt[j] = src[j];
			j++;
	}
	pt[j] = '\0';
	return (pt);
}
