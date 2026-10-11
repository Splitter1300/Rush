int	is_free(int pos, int v)
{
	int	i;

	i = 0;   //// On commence au debut de la ligne : colonne0
	while (i < pos % 4) // donne le numero de la colonne/verifie toute les case de la ligne
	{
		if (g_grid[pos / 4][i] == v) //numero de la ligne
			return (0);
		i++;
	}
	i = 0;
	while (i < pos / 4) //donne le numero de la colonne/verifie toute les cases de la ligne
	{
		if (g_grid[i][pos % 4] == v) // numero de la colonne
			return (0);
		i++;
	}
	return (1);
}
