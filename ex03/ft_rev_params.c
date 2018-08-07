void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int cursor;
	int i;

	cursor = 0;
	i = argc - 1;
	while (i > 0)
	{
		while (argv[i][cursor])
		{
			ft_putchar (argv[i][cursor]);
			cursor++;
		}
		i--;
		cursor = 0;
		ft_putchar('\n');
	}
	ft_putchar('\n');
	return (0);
}
