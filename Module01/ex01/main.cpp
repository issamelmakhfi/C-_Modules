/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:06:16 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 20:05:28 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    zombie *ptr;

    int N = 10;
    int i = 0;
    ptr = zombieHorde(N, "BOOO");
    while  ( i < N)
        ptr[i++].announce();
    delete[] ptr;
}