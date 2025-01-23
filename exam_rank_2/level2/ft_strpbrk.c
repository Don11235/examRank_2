#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	const char *pt;
	pt = s1;
	char arr[256] = {0};
	while (s2[i])
		arr[(unsigned)s2[i++]] = 1;
	while (s1[j])
	{
		if (arr[(unsigned)s1[j]] == 1)
			return ((char *)(pt + j));
		j++;
	}
	return (NULL);
}


int main()
{
	//printf("%s\n", strpbrk("mohammed", NULL));
	printf("%s", ft_strpbrk("mohammed", NULL));
}