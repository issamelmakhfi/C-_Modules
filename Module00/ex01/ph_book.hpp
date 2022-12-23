/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_book.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:17:20 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/22 21:12:57 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK
#define PH_BOOK

#include "contact.hpp"

class ph_book {
    public :
        contact arr[8];
        void    set_data(int *i);
        int     get_data(int *i);
};

#endif