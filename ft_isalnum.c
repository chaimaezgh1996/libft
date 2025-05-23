/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czghoumi <czghoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:42:00 by czghoumi          #+#    #+#             */
/*   Updated: 2024/11/10 22:44:13 by czghoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || 
			(c >= 'A' && c <= 'Z') || 
			(c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}
