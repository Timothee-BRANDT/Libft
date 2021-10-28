/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:48:13 by tbrandt           #+#    #+#             */
/*   Updated: 2021/10/28 14:17:35 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// liste de 0 1 2;
	// Cette fonction ajoute un nouvel element en tete de liste => -1 0 1 2;
void ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst; // le next du nouvel element (-1) pointe vers le deuxieme (0);
	*alst = new; // l'adresse du premier element de la liste devient l'adresse de l'element qu'on vient de rajouter; 
}	
