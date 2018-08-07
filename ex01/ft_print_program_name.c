void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int cursor;

	cursor = 0;
	if (argc > 0)
	{
		while (argv[0][cursor])
		{
			ft_putchar (argv[0][cursor]);
			cursor++;
		}
	}
	ft_putchar('\n');
	return (0);
}
