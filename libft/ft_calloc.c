#include "libft.h"

void	*ft_calloc(int nmemb, int size)
{
	char	*tmp;
	int	i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
}
