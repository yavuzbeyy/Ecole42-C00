/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:59:00 by ysahin            #+#    #+#             */
/*   Updated: 2022/08/25 18:11:35 by ysahin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_is_negative(int n)
{
	if(n<0)
		{
			write(1,"N",1);
		}
	if(n>=0)
		{
			write(1,"P",1);
		}
}
