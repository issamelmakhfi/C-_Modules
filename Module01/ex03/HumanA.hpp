/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:01:45 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 18:47:56 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_A
#define HUMAN_A

class HumanA {
    private :
        std::string name;
        Weapon &ptr;
    public :
        HumanA(std::string str, Weapon &ptr1);
        ~HumanA();
        void attack();
};

#endif
