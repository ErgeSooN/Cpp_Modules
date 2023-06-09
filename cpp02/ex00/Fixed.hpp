/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:07:44 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/09 13:53:38 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private :
	int _value;
	static const int _bits;
public :
	Fixed(void);
	Fixed(const Fixed &fix);
	~Fixed(void);
	
	Fixed& operator=(const Fixed &fix);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
