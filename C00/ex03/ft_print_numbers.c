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
#include <stdio.h>

 void ft_print_numbers(void)
 {
    int num = 0;
    char str[16];

    while(num <= 9)
     {
        int LengthUsed = sprintf(str, "%d", num);
        write(1, str, LengthUsed);
        num++;
     }
 }

int main(void) 
{
    ft_print_numbers();
    return 0;
}