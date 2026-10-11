int	view(int a, int b, int c, int d)
{
	int	max;    // la plus haute tours (en attente)
	int	count; // nombre de tour visible

	max = a;   // a = premiere tour
	count = 1;   // il y a minimum une tour de visible
	if (b > max) // 2eme tour
	{
		max = b;
		count++;
	}
	if (c > max)     // 3eme tour
	{
		max = c;
		count++;
	}
	if (d > max)    // 4eme tour, plus besoin de max =
		count++;

	return (count); // nombre de tour visible
}
