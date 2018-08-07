void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int cursor;

	cursor = 0;
	while (*(s1 + cursor) != '\0' && *(s1 + cursor) == *(s2 + cursor))
			cursor++;
	return ((char)*(s1+cursor)-(char)*(s2+cursor));
}

int ft_find_nth_str(char **tab, int size, int rank) 
{
	int i_rank;
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		i_rank = 1;
		j = 0;
		while (j < size)
		{
			if (ft_strcmp(tab[j],tab[i]) < 0)
				i_rank++;
			j++;
		}
		if (i_rank == rank)
			return (i);
		i++;
	}
	return ft_find_nth_str(tab, size, rank - 1);
}
			
int	main(int argc, char **argv)
{
	int	i;
	int 	cursor;
	int 	str_to_print;
		
	i = 0;
	cursor = 0;
	while (i < argc)
	{
		str_to_print = ft_find_nth_str(argv, argc, i + 1);
		if (str_to_print != 0)
		{
			while (argv[str_to_print][cursor])
			{
				ft_putchar (argv[str_to_print][cursor]);
				cursor++;
			}
			cursor = 0;
			ft_putchar('\n');
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
