#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < start)
		i++;
	while (len > 0)
	{
		str[j++] = (char) s[i++];
		len--;
	}
	(char) str[j] = '\0';
	return (str);
}
