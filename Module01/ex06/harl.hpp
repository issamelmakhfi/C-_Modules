/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:06:31 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/26 16:20:40 by ielmakhf         ###   ########.fr       */
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
        void complain(std::string level);
};

#endif