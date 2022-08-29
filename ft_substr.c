/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanheki <chanheki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:44:37 by chanheki          #+#    #+#             */
/*   Updated: 2022/07/12 17:56:52 by chanheki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	index;
	
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	s += start;
	index = 0;
	while (s && len--)
	{
		*(result++) = *(s++);
		index++;
	}
	*result = '\0';
	result -= index;
	return (result);
}
