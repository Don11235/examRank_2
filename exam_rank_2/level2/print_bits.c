#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		char b = ((octet >> i) & 1) + '0';
		write(1, &b, 1);
		i--;
	}
}
