/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <aaammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:04:52 by aaammari          #+#    #+#             */
/*   Updated: 2021/11/02 09:43:48 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*f;

	i = 0;
	f = b;
	while (i < len)
	{
		f[i] = (unsigned char)c;
		i ++;
	}
	return (b);
}

/*#include<stdio.h>
int main(void)
{
	char b[6];
	printf("%s", (char *)ft_memset(b,'a',5));

}*/
