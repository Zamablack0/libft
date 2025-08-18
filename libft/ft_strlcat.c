/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajai <hajai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:10:58 by hajai             #+#    #+#             */
/*   Updated: 2025/04/15 12:11:41 by hajai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lsrc;
	size_t	ldst;

	lsrc = ft_strlen((char *) src);
	ldst = ft_strlen(dst);
	if (ldst >= size)
		return (lsrc + size);
	if (size - ldst > lsrc)
		ft_memcpy(dst + ldst, src, lsrc + 1);
	else
	{
		ft_memcpy(dst + ldst, src, size - ldst - 1);
		dst[size - 1] = '\0';
	}
	return (lsrc + ldst);
}
