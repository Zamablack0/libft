#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	i;

	i = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				write(1, "%", 1);
				i++;
			}
			else if (str[i + 1] == 'c')
			{
				char res = va_arg(list, int);
				write(1, &res, 1);
				i++;
			}
			else if (str[i + 1] == 'd')
			{
				int re = va_arg(list, int);
				ft_putnbr(re);
				i++;
			}
			else if (str[i + 1] == 's')
			{
				char *s = va_arg(list, char *);
				ft_putstr(s);
				i++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (0);
}

int	main()
{
	char	c = 'c';
	char	*s = "Bye";
	int	d = -120;

	ft_printf("Salut\n - %% %c %d %s", c, d, s);
	printf("\nSalut\n - %% %c %d %s\n", c, d, s);
	return (0);
}
