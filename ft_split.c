/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <aaammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:46:34 by aaammari          #+#    #+#             */
/*   Updated: 2021/11/17 17:57:09 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_count_word(char const *tosplit, char delim)
{
	int	lenstr;
	int	nword;

	lenstr = 0;
	nword = 0;
	while (tosplit[lenstr])
	{
		if (tosplit[lenstr] != delim
			&& (tosplit[lenstr + 1] == delim || tosplit[lenstr + 1] == '\0'))
			nword++;
		lenstr++;
	}
	return (nword);
}

static char	**free_alloc(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		len;

	i = 0;
	if (!s)
		return (0);
	tab = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (tab);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			tab[i++] = ft_substr(s, 0, len);
		if (!tab[i - 1] && len != 0)
			return (free_alloc(tab));
		s += len;
	}
	tab[i] = NULL;
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	t[] = " Hello    world      ";
	char	**r = ft_split(t, ' ');

	printf("%s\n", r[0]);
	printf("%s", r[1]);
	printf("%s", r[2]);
	return (0);
}
//*/
