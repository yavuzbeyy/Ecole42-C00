/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:02:55 by ysahin            #+#    #+#             */
/*   Updated: 2022/08/25 17:21:00 by ysahin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void){

	char	reverse_letter;

	reverse_letter = 'z';

	while(reverse_letter!=a){
		write(1 ,&reverse_letter,1);
		reverse_letter--;
	}
	if(reverse_letter == 'a')
		write(1 ,"a",1);
}



