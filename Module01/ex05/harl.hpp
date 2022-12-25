/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:06:31 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/25 22:34:58 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL

#include <iostream>

class harl {
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        void complain(std::string level)
        {
            void Harl::complain(std::string level)
{
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
}
        }
        int a;
};

#endif