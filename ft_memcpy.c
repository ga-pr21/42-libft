/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:33:12 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:03:09 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;

	if (s1 == s2)
	{
		return (s1);
	}
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (n--)
	{
		*dst++ = *src++;
	}
	return (s1);
}

// int main()
// {
// 	char *str[15];
// 	char *src = "piaui";
// 	ft_memcpy(str, src, 6);
// 	printf("%s\n", str);
// }