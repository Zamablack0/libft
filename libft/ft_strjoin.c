/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajai <hajai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:12:49 by hajai             #+#    #+#             */
/*   Updated: 2025/04/15 11:36:14 by hajai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	inc(char *str, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen((char *) s2))
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	str = malloc((ft_strlen((char *) s1)
				+ ft_strlen((char *) s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	inc(str, s1, s2);
	return (str);
}
