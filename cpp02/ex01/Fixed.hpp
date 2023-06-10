/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:08:41 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/04 16:08:41 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private :
	int _value;
	static const int _bits;
public :
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fix);
	~Fixed(void);
	
	Fixed& operator=(const Fixed &fix);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif
