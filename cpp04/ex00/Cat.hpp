/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:14:30 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:14:30 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    
    Cat(Cat const& src);

    Cat& operator=(Cat const& cat);

    virtual ~Cat();

    virtual void makeSound() const;
};

#endif