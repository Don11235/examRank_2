unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int				i;

	i = 0;
	rev = 0;
	while (i < 8)
	{
		rev = (rev << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (rev);
}

#include <stdio.h>

int main()
{
	printf("%d", reverse_bits(65));
}