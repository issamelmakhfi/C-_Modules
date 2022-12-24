/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:38:10 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 14:59:40 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    zombie zom;
    zombie *ptr;

    ptr = zom.new_zombie("hello");
    ptr->announce();
    zom.randomChump("issam");
    delete ptr;
    return (0);
}