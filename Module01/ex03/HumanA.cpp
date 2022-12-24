/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:03:58 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 20:13:43 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &ptr1):ptr(ptr1)
{
    name = str;
}

HumanA::~HumanA()
{
    std::cout <<  "HumanA Done" << std::endl;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << ptr.getType() << std::endl;
}