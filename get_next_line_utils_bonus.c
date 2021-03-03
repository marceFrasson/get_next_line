/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:45:46 by mfrasson          #+#    #+#             */
/*   Updated: 2021/03/03 14:10:47 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char		*ft_strchr(const char *str, int c)
{
	char	*str1;
	int		i;

	str1 = (char *)str;
	i = 0;
	while (str1[i])
	{
		if (str1[i] == c)
		{
			return (&str1[i]);
		}
		i++;
	}
	if (!c)
	{
		return (&str1[i]);
	}
	return (0);
}

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strjoin(char const *prefix, char const *suffix)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!prefix || !suffix)
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen(prefix) + ft_strlen(suffix) + 1)))
		return (NULL);
	while (prefix[i])
	{
		str[j] = prefix[i];
		i++;
		j++;
	}
	i = 0;
	while (suffix[i])
	{
		str[j] = suffix[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char		*ft_substr(char const *str, unsigned int index, size_t size)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!(substr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (!str || !substr)
		return (NULL);
	while ((i < size) && ((index + 1) < ft_strlen(str)) && (str[index + 1]))
	{
		substr[i] = str[index + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char		*ft_strdup(const char *str)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = malloc(ft_strlen(str) + 1)))
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return ((char *)dst);
}
