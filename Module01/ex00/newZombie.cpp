/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:41:43 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 15:19:02 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie* zombie::new_zombie(std::string name)
{
    zombie *ptr = new zombie;
    ptr->name = name;
    return (ptr);
}