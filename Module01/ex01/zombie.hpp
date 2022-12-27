/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:05:42 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 20:04:43 by ielmakhf         ###   ########.fr       */
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
        ~zombie();
        void    announce();
        void    set_name(std::string __name);
};
zombie* zombieHorde( int N, std::string name );

#endif