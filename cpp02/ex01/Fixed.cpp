/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:08:29 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/04 16:08:29 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits)); // roundf float yuvarlama aracı
	std::cout << value << " float: " << _value << std::endl;
	std::cout << "Float constructor called" << std::endl;
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

Fixed& Fixed::operator=(const Fixed& fix) // = kopya atayıcı mantığını anlatmanın iyi bir yolu
{
	std::cout << "Copy assignation operator called" << std::endl;
	_value = fix.getRawBits();
	return *this; // nesnenin datasını döndürüyorum
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return (_value >> _bits); // 8 bits kaydığdırımda virgül ve virgülden sonraki kısımdan kurtuluyorum
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix) // pdfte overloadingi anlatmamız için istiyor
{ // örnekli anlatım için notion aç
	os << fix.toFloat();
	return os;
}
