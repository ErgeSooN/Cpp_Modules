/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:09:03 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/04 16:09:03 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a(10);
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));  // buranın sonucu 10.1 gibi bir şey dönüyor 
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << " b value"<< std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}