/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <tblaudez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 11:07:07 by tblaudez          #+#    #+#             */
/*   Updated: 2018/12/12 19:30:51 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is(int (*f)(int c), const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!f(str[i++]))
			return (0);
	return (1);
}
