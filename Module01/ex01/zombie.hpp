/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:05:42 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 15:47:20 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <iomanip>

class zombie {
    private :
    std::string name;
    public:
        ~zombie()
        {
            std::cout << name << std::endl;
        }
        zombie* zombieHorde( int N, std::string name );
        void    announce();
};

#endif