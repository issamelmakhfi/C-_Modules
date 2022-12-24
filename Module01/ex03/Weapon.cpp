/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:40:49 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 18:52:46 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string str)
{
    type = str;
}

Weapon::Weapon(std::string mssg)
{
    setType(mssg);
}