/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:14:35 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:14:35 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();

    Dog(Dog const& src);

    Dog& operator=(Dog const& dog);

    virtual ~Dog();

    virtual void makeSound() const;
};

#endif