/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:08:51 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 21:00:54 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Done" << std::endl;
}
void    HumanB::attack()
{
    std::cout << name << "attacks with their" << ptr->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &ptr1)
{
    ptr = &ptr1;
}