/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:06:16 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 15:48:42 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    zombie zom;
    zombie *ptr;

    ptr = zom.zombieHorde(10, "issam");
    ptr->announce();
    delete[] ptr;
}