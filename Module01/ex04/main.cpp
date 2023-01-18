/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:21:10 by ielmakhf          #+#    #+#             */
/*   Updated: 2023/01/17 18:48:41 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>


void    usage()
{
    std::cout << "\33[0;30mUsage :\33[0m" << std::endl;
    std::cout << "\33[0;32m<./replace> S1 S2\33[0m" << std::endl;
    std::cout << "\t\33[0;31mS1\33[0m : String that you want to remove." << std::endl;
    std::cout << "\t\33[0;31mS2\33[0m : String that you want to replace." << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 3)
    {
        usage();
        return (1);
    }
    int index = 0;
    int len;
    std::string str;
    std::ifstream f1;
    std::ofstream f2;

    f1.open("file.txt");
    f2.open("file.replace.txt");
    if (!strcmp(av[1], av[2]))
        return (1);
    while (!f1.eof())
    {
        getline(f1, str);
        while (index != -1)
        {
            index = str.find(av[1], index);
            if (index == -1)
                continue ;
            len = strlen(av[1]);
            str.erase(index, len);
            str.insert(index , av[2]);
        }
        f2 << str << std::endl;
    }
    f1.close();
    f2.close();
    return (0);
}