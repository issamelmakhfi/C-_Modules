/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:33:46 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 16:57:35 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <iomanip>

class zombie {
    private :
        std::string name;
    public :
        zombie (std::string _name)
        {
            name = _name;
        }
        ~zombie()
        {
            std::cout <<name << " is dead." << std::endl;
        }
        void    announce(void);
};

void randomChump( std::string name );
zombie *new_zombie(std::string name);

#endif