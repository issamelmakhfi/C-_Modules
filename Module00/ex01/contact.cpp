/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:06:52 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/22 20:57:49 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"
#include "contact.hpp"


void contact::set_first_name()
{
    while (1)
    {
        std::cout << "first_name : ";
        std::getline(std::cin, first_name);
        if (std::cin.eof())
            exit (0);
        if (first_name.empty())
        {
            std::cout << "YOU CANT LEAVE IT EMPTY" << std::endl;
            continue;
        }
        else
            break;
    }
    
}

void contact::set_last_name()
{
    while (1)
    {
        std::cout << "last_name : ";
        std::getline(std::cin, last_name);
        if (std::cin.eof())
            exit (0);
        if (last_name.empty())
        {
            std::cout << "YOU CANT LEAVE IT EMPTY" << std::endl;
            continue;
        }
        else 
            break;
    }
}

void contact::set_nickname()
{
    while (1)
    {
        std::cout << "nickname : ";
        std::getline(std::cin, nickname);
        if (std::cin.eof())
            exit (0);
        if (nickname.empty())
        {
            std::cout << "YOU CANT LEAVE IT EMPTY" << std::endl;
            continue;
        }
        else 
            break;
    }
}

void contact::set_darkest_secret()
{
    while (1)
    {
        std::cout << "darkest_secret : ";
        std::getline(std::cin, darkest_secret);
        if (std::cin.eof())
            exit (0);
        if (darkest_secret.empty())
        {
            std::cout << "YOU CANT LEAVE IT EMPTY" << std::endl;
            continue;
        }
        else 
            break;
    }
}

void contact::set_phone_number()
{
    while (1)
    {
        std::cout << "phone_number : ";
        std::getline(std::cin, phone_number);
        if (std::cin.eof())
            exit (0);
        if (phone_number.empty())
        {
            std::cout << "YOU CANT LEAVE IT EMPTY" << std::endl;
            continue;
        }
        else 
            break;
    }
}

void contact::get_first_name(int check)
{
    if (check)
    {
        std::cout << std::setw(10);
        std::cout << CROPPED_STRING(first_name, 10);
    }
    else
        std::cout << first_name;
}

void contact::get_last_name(int check)
{
    if (check)
    {
        std::cout << std::setw(10);
        std::cout << CROPPED_STRING(last_name, 10);
    }
    else
        std::cout << last_name;
}

void contact::get_nickname(int check)
{
    if (check)
    {
        std::cout << std::setw(10);
        std::cout << CROPPED_STRING(nickname, 10);
    }
    else
        std::cout << nickname;
}

void contact::get_darkest_secret()
{
    std::cout << darkest_secret;
}

void contact::get_phone_number()
{
    std::cout << phone_number;
}
