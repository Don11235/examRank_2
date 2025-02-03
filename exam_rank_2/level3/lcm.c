unsigned int hcf(unsigned int a, unsigned int b)
{
	int r;
	if (b == 0)
		return (a);
	r = a % b;
	while (r)                    // Euclidean Algorithm
	{
		a = b;
		b = r;
		r = a % b;
	}
	return (b);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return ((a * b) / hcf(a, b));
}
