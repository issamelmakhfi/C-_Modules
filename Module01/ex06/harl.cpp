/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:19:02 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/26 17:09:57 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"


void    harl::debug()
{
    std::cout << "\33[0;32m[DEBUG]\33[0m" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    harl::info()
{
    std::cout << "\33[0;32m[INFO]\33[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    harl::warning()
{
    std::cout << "\33[0;32m[WARNING]\33[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    harl::error()
{
    std::cout << "\33[0;32m[ERROR]\33[0m" << std::endl;
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
        case 1 :
            (this->*ptr[1]) ();
        case 2 :
            (this->*ptr[2]) ();
        case 3 :
            (this->*ptr[3]) ();
            break;
        default :
            std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
}