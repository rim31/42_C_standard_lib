/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:54:53 by oseng             #+#    #+#             */
/*   Updated: 2015/12/11 10:56:28 by oseng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		i;
	char	*s3;

	i = 0;
	n = 0;
	if (s1 && s2)
	{
		s3 = (char *)malloc(sizeof(*s3) * (ft_strlen((char *)s1) +
					ft_strlen((char *)s2 + 1)));
		if (s3 == NULL)
			return (NULL);
		while (((char *)s1)[n] != '\0')
		{
			s3[n] = ((char *)s1)[n];
			n++;
		}
		while (((char *)s2)[i] != '\0')
			s3[n++] = ((char *)s2)[i++];
		s3[n] = '\0';
		return (s3);
	}
	return (NULL);
}
