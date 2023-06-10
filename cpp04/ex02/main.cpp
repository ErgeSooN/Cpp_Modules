/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:53 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:53 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"

int main(void)
{
	 const AAnimal* dog = new Dog();
	 const AAnimal* cat = new Cat();
	 std::cout << std::endl;

	 dog->makeSound();
	 cat->makeSound();
	 std::cout << std::endl;

	 delete dog;
	 delete cat;
	
	 return 0;
}