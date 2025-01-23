int ft_atoi_base(const char *str, int str_base)
{
	char base_lo[16] = "0123456789abcdef";
	char base_up[16] = "0123456789ABCDEF";
	int i = 0;
	int nb = 0;
	int b = 1;
	int j = 0;
	int sign = 1;

	if (str[0] == '-')
		sign = -1;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		j = 0;
		while (j < 16)
		{
			if (str[i] == base_lo[j] || str[i] == base_up[j])
			{
				nb = nb + (j * b);
				break;
			}
			j++;
		}
		b = b * str_base;
		i--;
	}
	return (sign * nb);
}
