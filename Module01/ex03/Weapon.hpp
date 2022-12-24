/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:18:39 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 18:50:01 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(std::string mssg);
        std::string getType();
        void        setType(std::string str);
};

#endif