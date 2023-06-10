/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:37 by oozdiyar          #+#    #+#             */
/*   Updated: 2023/06/08 11:15:37 by oozdiyar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal 
{
 protected:
  std::string _type;

 public:
  /* default constructor */
  AAnimal();

  /* copy constructor */
  AAnimal(AAnimal const& src);

  /* copy assignment operator */
  virtual AAnimal& operator=(AAnimal const& animal);

  /* destructor */
  virtual ~AAnimal();

  /* getter */
  std::string const& getType() const;

  virtual void makeSound() const = 0;
};

#endif