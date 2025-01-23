#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;
	char arr[256] = {0};
	while (reject[j])
		arr[(unsigned)reject[j++]] = 1;
	while (s[i])
	{
		if (arr[(unsigned)s[i]] == 1)
			return (i);
		i++;
	}
	return (0);
}



int main()
{
	printf("%zu\n", ft_strcspn("ohammed", "xoymz"));
	printf("%zu", strcspn("ohammed", "xoymz"));
}