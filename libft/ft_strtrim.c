#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	issameset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start;
	int	end;
	int	i;

	start = 0;
	i = 0;
	end = ft_strlen((char *) s1);
	while (s1[start] && issameset(s1[start], set))
		start++;
	while (end > start && issameset(s1[end - 1], set))
		end--;
	str = malloc((start + end + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
