/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:58:23 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/23 22:06:04 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void zombie::randomChump(std::string name)
{
    zombie zom;
    zom.name = name;
    zom.announce();
}