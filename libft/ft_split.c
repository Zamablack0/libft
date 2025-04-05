#include "libft.h"

int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] != c && s[i + 1] != '\0')
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(const char *s, int start, int len)
{
	char	*new;
	int	i;
	
	new = malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**split(char const *s, char c)
{
	char	**tab;
	int	i;
	int	t;
	int	start;

	t = 0;
	i = 0;
	start = 0;
	tab = malloc((countword(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > start)
			tab[t++] = ft_strndup(s, start, i - start);
	}
	tab[t] = NULL;
	return (tab);
}
