/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:42:16 by czghoumi          #+#    #+#             */
/*   Updated: 2024/11/15 23:23:41 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] == st2[i])
			i++;
		else
			return (st1[i] - st2[i]);
	}
	return (0);
}
