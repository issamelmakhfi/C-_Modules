/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:01:01 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/22 21:12:37 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"
#include "contact.hpp"


int    is_str_digit(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (1);
        i++;
    }
    return (0);
}

void    info()
{
    std::cout << std::setw(22);
    std::cout << "\033[0;32mId\033[0m" << "| ";
    std::cout << "\033[0;32mfirst_name\033[0m" << "| ";
    std::cout << "\033[0;32mlast_name\033[0m" << " | ";
    std::cout << "\033[0;32mnickname\033[0m" << "  | "<< std::endl;
}

int    ph_book::get_data(int *i)
{
    int id = 0;
    std::string  index;
    int j = 0;
    if (*i > 8)
        *i = 8;
    while (j < *i)
    {
        info();
        std::cout << std::setw(10);
        std::cout << id << " |";
        arr[j].get_first_name(1);
        std::cout << " |";
        arr[j].get_last_name(1);
        std::cout << " |";
        arr[j].get_nickname(1);
        std::cout << " |" << std::endl;
        j++;
        id++;   
    }
    std::cout << "Chose your Contact : ";
    std::getline(std::cin, index);
    if (std::cin.eof())
        exit (0);
    if (is_str_digit(index))
        std::cout << "\33[0;31mTHE NUMBER  THAT YOU CHOSE IT IS NOT VALID. SORRY!\33[0m" << std::endl;
    else
    {
        id = atoi(index.c_str());
        if (id > *i - 1) 
        {
            std::cout << "\33[0;31mNO CONTACT FOUND. SORRY!\33[0m" << std::endl;
            return (1);
        }
        std::cout << "\033[0;32\nmfirst_name     : \033[0m";
        arr[id].get_first_name(0);
        std::cout << std::endl;
        std::cout << std::endl << "\033[0;32mlast_name      : \033[0m";
        arr[id].get_last_name(0);
        std::cout << std::endl;
        std::cout << std::endl << "\033[0;32mnicknamename   : \033[0m";
        arr[id].get_nickname(0);
        std::cout << std::endl;
        std::cout << std::endl << "\033[0;32mdarkest_secret : \033[0m";
        arr[id].get_darkest_secret();
        std::cout << std::endl;
        std::cout << std::endl << "\033[0;32mphone_number   : \033[0m";
        arr[id].get_phone_number();
        std::cout << std::endl;
    }
    return (0);
}

void    ph_book::set_data(int *i)
{
    int id;
    id = *i % 8;
    arr[id].set_first_name();
    arr[*i].set_last_name();
    arr[*i].set_nickname();
    arr[*i].set_darkest_secret();
    arr[*i].set_phone_number();
    (*i)++;
}

int main()
{
    std::string str;
    static int i;
    ph_book ph;

    i = 0;
    std::cout << "Usage : " << std::endl;
    std::cout << "\t\33[0;32mADD\33[0m    : To add a new contact." << std::endl;
    std::cout << "\t\33[0;32mSEARCH\33[0m : To search for contact." << std::endl;
    std::cout << "\t\33[0;32mEXIT\33[0m   : To exit the program." << std::endl;
    while (1)
    {
        std::cout << "\33[0;34mUsage:============+============================+=================+\n\33[0m";
        std::cout << "|       ADD       |           SEARCH           |       EXIT      |\n";
        std::cout << "\33[0;34m+=================+============================+=================+\n\33[0m";
        std::getline(std::cin, str);
        if (str == "EXIT")
        {
            std::cout << "\33[0;31mGOOD BYE\33[0m";
            exit(0);
        }
        else if (str == "ADD")
            ph.set_data(&i);
        else if (str == "SEARCH")
            ph.get_data(&i);
        else if (std::cin.eof())
            exit (0);
        else
            str.clear();
    }
    return (0);
}