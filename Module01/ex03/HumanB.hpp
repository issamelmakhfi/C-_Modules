/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:06:21 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 20:41:34 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private :
        std::string weapon;
        std::string name;
        Weapon *ptr;
    public  :
        HumanB(std::string str);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &ptr1);
        
};

#endif