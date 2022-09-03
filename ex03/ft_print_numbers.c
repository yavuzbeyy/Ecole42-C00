/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:24:25 by ysahin            #+#    #+#             */
/*   Updated: 2022/08/25 17:45:40 by ysahin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int main() {

   ft_print_numbers();

    return 0;
}

void ft_print_numbers(){
	char	number;
    number =  '0';

	while(number<='9'){
        write(1,&number,1);
		number++;
	}

}
