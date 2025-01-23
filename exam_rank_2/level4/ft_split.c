#include <stdlib.h>

int find_start(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i] == ' ')
		i++;
	return (i);
}

int find_end(char *str)
{
	int i = 0;
	if (!str || !str[i])
		return (0);
	while (str[i])
		i++;
	i--;
	while (i > 0 && str[i] == ' ')
		i--;
	return (i);
}
int count_words(char *str)
{
	int i = find_start(str);
	int j = find_end(str);
	int count = 0;

	if (i >= j)
		return (0);
	while (i <= j)
	{
		while (str[i] != ' ' && i <= j)
			i++;
		if (str[i] == ' ' && i <= j)
			count++;
		while (str[i] == ' ' && i <= j)
			i++;
	}
	return (count + 1);
}
char *extract_word(char *str, int *index)
{
	char *pt;
	int k;
	int z;

	z = 0;
	k = *index;
	while (str[k] != ' ' && str[k])
		k++;
	pt = malloc(k - *index + 1);
	if (pt == NULL)
		return (NULL);
	while (*index < k)
		pt[z++] = str[(*index)++];
	pt[z] = '\0';
	while (str[*index] == ' ')
		(*index)++;
	return (pt);
}


char **ft_split(char *str)
{
	int i = find_start(str);
	int len = count_words(str);
	int z;
	int *ind;
	char **arr;

	arr = malloc((len + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	ind = &i;
	z = 0;
	while (z < len)
	{
		arr[z] = extract_word(str, ind);
		z++;
	}
	arr[z] = NULL;
	return (arr);
}

#include <stdio.h>

int main()
{
	char **p;
	p = ft_split("");
	printf("%s", p[0]);
}