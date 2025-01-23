#include <unistd.h>

size_t ft_strlen(char *str)
{
	size_t count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}