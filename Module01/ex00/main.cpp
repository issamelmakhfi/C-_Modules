/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:38:10 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 16:58:41 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    zombie *ptr;

    ptr = new_zombie("FOOO");
    ptr->announce();
    delete ptr;
    randomChump("BOOO");
    return (0);
}