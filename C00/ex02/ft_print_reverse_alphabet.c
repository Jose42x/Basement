/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonreal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:48:10 by jmonreal          #+#    #+#             */
/*   Updated: 2021/09/26 18:48:14 by jmonreal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void ft_print_reverse_alphabet(void)
 {
     char last = 'z';

     while(last >= 'a')
     {
         write(1, &last, 1);
         last--;
     }
 }

int main(void) 
{
    ft_print_reverse_alphabet();
    return 0;
}