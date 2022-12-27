/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:06:13 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/27 19:24:54 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie* zombieHorde( int N, std::string name )
{
    int i;

    i = 0;
    zombie  *ptr = new zombie[N];
    while  ( i < N)
        ptr[i++].set_name(name);
    return (ptr);
}