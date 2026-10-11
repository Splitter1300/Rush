int	V_ligne(int r)  // r = numero de la ligne
{
    int	*h;

    h = g_grid[r];  // premiere element de la ligne
    if (view(h[0], h[1], h[2], h[3]) != g_clue[8 + r]) //compte les tours visible de gauche a droite
    {
        return (0);
    }
   
    if (view(h[3], h[2], h[1], h[0]) != g_clue[12 + r]) // compte les tour visible de droite a gauche
    {
        return (0);
    }
    return (1); // si les deux reussise (l'indice equivau au resultat)
}

int	V_colonne(int a)
{
	int	b;
	int	c;
	int	d;
	int	e;

	b = g_grid[0][a]; //case premiere ligne 
	c = g_grid[1][a]; // case deuxieme ligne
	d = g_grid[2][a]; //.. etc
	e = g_grid[3][a];
	if (view(b, c, d, e) != g_clue[a])
	{
		return (0);
	}
	if (view(e, d, c, b) != g_clue[4 + a])
	{
		return (0);
	}
	return (1);
}
