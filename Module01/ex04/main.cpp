/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:21:10 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/24 21:59:56 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>


int main()
{
    int i = 0;
    std::string str[1000];
    std::ifstream f1;
    std::ofstream f2;

    f1.open("file.txt");
    f2.open("file.replace.txt");
    while (!f1.eof() && i < 1000)
    {
        getline(f1, str[i]);
        f2 << str[i++] << std::endl;
    }
    f1.close();
    f2.close();
}
