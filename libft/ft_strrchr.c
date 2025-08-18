/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajai <hajai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:44:16 by hajai             #+#    #+#             */
/*   Updated: 2025/04/15 12:59:36 by hajai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		len;

	cc = (char) c;
	len = ft_strlen((char *) s);
	while (len >= 0)
	{
		if (s[len] == cc)
			return ((char *) &s[len]);
		len --;
	}
	return (NULL);
}
