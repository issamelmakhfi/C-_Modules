/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:33:46 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 14:59:19 by ielmakhf         ###   ########.fr       */
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
        ~zombie()
        {
            std::cout << name << std::endl;
        }
        void    announce(void);
        zombie *new_zombie(std::string name);
        void randomChump( std::string name );
};

#endif