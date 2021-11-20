/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <aaammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:51:38 by aaammari          #+#    #+#             */
/*   Updated: 2021/11/09 12:21:50 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	r;
	int	i;

	i = 0;
	r = ft_strlen(s);
	while (i <= r)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*int main()
{
   char t[] = "hello anas";
    printf("%s",ft_strchr(t,'h'));

    return 0;
}*/