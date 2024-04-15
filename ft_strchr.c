/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:21:55 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:56:34 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (*s == '\0')
		return (NULL);
	i = -1;
	while (s)
		if (s[++i] == (char) c)
			return ((char *)(s + i));
	return (NULL);
}

/*#include <string.h>
int main()
{
	int c = ' ';
	char *str = "This is a test!";
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
}*/