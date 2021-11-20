/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <aaammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:22:00 by aaammari          #+#    #+#             */
/*   Updated: 2021/11/18 13:54:54 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	sub = malloc((len + 1) * (sizeof(char)));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
		sub[i] = '\0';
	return (sub);
}

/*#include<stdio.h>

int	main(void)
{
	char	t[11] = "hello 1337";

	printf("%s", ft_substr(t, 2, 7));
	return (0);
}//*/
