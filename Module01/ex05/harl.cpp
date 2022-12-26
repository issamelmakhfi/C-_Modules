/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:19:02 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/26 17:01:09 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"


void    harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    harl::complain(std::string level)
{
    int id = 0;
    void    (harl::*ptr[4]) () = {&harl::debug, &harl::info, &harl::warning, &harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (id < 4)
    {
        if (!level.compare(levels[id]))
            break;
        id++;
    }
    switch (id) {
        case 0 :
            (this->*ptr[0]) ();
            break;
        case 1 :
            (this->*ptr[1]) ();
            break;
        case 2 :
            (this->*ptr[2]) ();
            break;
        case 3 :
            (this->*ptr[3]) ();
            break;
        default :
            std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
}