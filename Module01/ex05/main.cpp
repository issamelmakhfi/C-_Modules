/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:15:33 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/26 16:59:03 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **av)
{
    harl harlobject;
    if (ac == 2)
        harlobject.complain(av[1]);
    return (0);
}