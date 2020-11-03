/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:09:12 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/03 20:09:16 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	//if (lst == NULL) //??? надо уточнить у пиров
		//return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
