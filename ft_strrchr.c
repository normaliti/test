/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:27:26 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 17:27:32 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int sym)
{
	const char *poz = 0;
	
	while(*str)
	{
		if(*str == (char)sym)
			poz = str;
		str++;
	}
	return ((char *)poz);
}