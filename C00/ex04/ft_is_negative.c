/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonreal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:48:10 by jmonreal          #+#    #+#             */
/*   Updated: 2021/09/26 18:48:14 by jmonreal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void ft_print_numbers(int num)
 {
    char n = 'N';
    char p = 'P';

    if(num < 0)
        write(1, &n, 1);
     else
        write(1, &p, 1);
 }

int main(void) 
{
    ft_print_numbers(-1);
    ft_print_numbers(0);
    ft_print_numbers(1);
    return 0;
}