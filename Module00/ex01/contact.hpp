/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:32:23 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/22 21:12:53 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
#define CONTACT

#include <iostream>
#include <iomanip>
#define CROPPED_STRING(str, len) ( (str.size() <= len) ? (str) : (str.substr(0, len - 1) + ".") )


class contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
    public :
        void set_first_name();
        void set_last_name();
        void set_nickname();
        void set_darkest_secret();
        void set_phone_number();

        void get_first_name(int check);
        void get_last_name(int check);
        void get_nickname(int check);
        void get_darkest_secret();
        void get_phone_number();
};


#endif