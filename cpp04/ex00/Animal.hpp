/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:14:21 by oozdiyar          #+#    #+#             */
/*   Updated: 2023/06/08 11:14:21 by oozdiyar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
 protected:
  std::string _type;

 public:
  /* default constructor */
  Animal();

  /* copy constructor */
  Animal(Animal const& src);

  /* copy assignment operator */
  Animal& operator=(Animal const& animal);

  /* destructor */
  virtual ~Animal();

  /* getter */
  std::string const& getType() const;

  virtual void makeSound() const;
};

#endif