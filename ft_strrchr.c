/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <aaammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:12:31 by aaammari          #+#    #+#             */
/*   Updated: 2021/11/11 12:44:23 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		r;

	r = ft_strlen(s);
	while (r >= 0)
	{
		if (s[r] == (char)c)
			return ((char *)(s + r));
		r--;
	}
	return (0);
}
/*int main()
{
   char t[] = "hello anas";
    printf("%s",ft_strrchr(t,'l'));

    return 0;
}*/
