/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:57:06 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 20:06:45 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "The memory address of \33[0;32mstr\33[0m        : " <<  &str << std::endl;
    std::cout << "The memory address of \33[0;32mstringPTR\33[0m  : " << &stringPTR << std::endl;
    std::cout << "The memory address of \33[0;32mstringREF\33[0m  : " << &stringREF << std::endl;
    
    std::cout << std::endl << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}