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

void ft_print_numbers(void)
{
    int num = '0';

    while (num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
}

int main(void)
{
    ft_print_numbers();
    return 0;
}