#include "libft.h"

int	itoaconv(int n, char *tab, int i)
{
	if (n < 0)
	{
		tab[0] = '-';
		n = -n;
	}
	if (n >= 10)
		i = itoaconv(n / 10, tab, i - 1);
	tab[i] = '0' + n % 10;
	return (i + 1);
}

int	itoacount(int n, int i)
{
	if (n < 0)
		n = -n;
	if (n >= 10)
		return (itoacount(n / 10, i + 1));
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int	len;
	int	totlen;
	int	start;

	len = itoacount(n, 0);
	if (n < 0)
		totlen = len + 1;
	else
		totlen = len;
	tab = malloc((totlen + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	if (n < 0)
		start = len;
	else
		start = len - 1;
	itoaconv(n, tab, start);
	tab[totlen] = '\0';
	return (tab);
}
