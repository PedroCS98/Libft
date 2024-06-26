/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:53:39 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 17:12:49 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == (char) c)
			return ((char *)(s + i));
	return (NULL);
}

/*#include <string.h>
int main()
{
	int c = '\0';
	char *str = "This is a test!";
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}*/