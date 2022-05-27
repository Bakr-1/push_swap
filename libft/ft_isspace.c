/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:01:13 by aalseri           #+#    #+#             */
/*   Updated: 2022/04/16 20:53:38 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int i)
{
	return (i == '\t' || i == '\f' || i == '\r' \
	|| i == ' ' || i == '\n' || i == '\v');
}