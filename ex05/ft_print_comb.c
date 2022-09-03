/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:14:16 by ysahin            #+#    #+#             */
/*   Updated: 2022/08/26 12:13:12 by ysahin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void){
		
		char    x	= '0';
		char    y	= '1';
		char    z	= '2';
		char	comma = ',';


		write(1,&x,1);
		
		write(1,&y,1);
		
		write(1,&z,1);
		
		write(1,&comma,1);
			
		while(z<'9'){
			
		    z++;
		    
			write(1,&x,1);
			
			write(1,&y,1);
			
			write(1,&z,1);
			
			write(1,&comma,1);
			
        	while(z >= '9'){
        		
           		y++;
           		
            	z=y;
            	
            	z++;
            	
           		write(1,&x,1);
           		
				write(1,&y,1);
				
				write(1,&z,1);
				
				write(1,&comma,1);
				
            break;
        }
            while(y >= '8'){
            	
            	x++;
            	
            	y=x;
            	
            	y++;
            	
            	z=y;
            	
            	z++;
            	
           		write(1,&x,1);
           		
				write(1,&y,1);
				
				write(1,&z,1);
				
				write(1,&comma,1);

        	break;
		}
	}
}

int main() {

	ft_print_comb();

    return (0);
}
