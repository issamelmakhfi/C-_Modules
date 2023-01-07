/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:53:16 by ielmakhf          #+#    #+#             */
/*   Updated: 2022/12/30 16:29:40 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _fixed_HPP_
#define _fixed_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	fixed
{
	public	:
		fixed ();
		fixed (fixed const &obj);
		~fixed ();
		fixed &operator= (const fixed &obj);
        int getRawBits( void ) const;
        void    setRawbits(int const raw);

	private	:
        int fixed_P;
        static const int bits = 8;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
