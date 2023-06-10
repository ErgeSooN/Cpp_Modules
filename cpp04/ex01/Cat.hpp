/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:11 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:11 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
  Brain* _brain;
public:
    /* default constructor */
    Cat();

    /* copy constructor */
    Cat(Cat const& src);

    /* copy assignment operator */
    Cat& operator=(Cat const& cat);

    /* destructor */
    virtual ~Cat();

    /* getters */
    std::string const& getIdea(int i) const;    

    /* setter */
    void setIdea(int i, std::string const& idea);

    /* public methods */
    void printIdeas() const;
    virtual void makeSound() const;
};

#endif