/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:07:53 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/09 13:53:30 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
	std::cout << "Copy assignation operator called" << std::endl;
	_value = fix.getRawBits();
	return *this;
}
/*
	Neden referans kullandık? 
	1.efektif ve verimli kopyalama -> orjinal nesnenin bellekteki konumunu
	kopyaladığımızdan dolayı kopylama işlemi gerektirmez.
	2.İstenmeyen sonsuz döngüleri engellemek
	3.Bellek kullanımını azaltmak -> büyük neslerin kopyalanmasında referans
	kullanarak aynı bellek alanını paylaşabiliriz.
*/
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

