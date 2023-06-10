/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:16:06 by oozdiyar          #+#    #+#             */
/*   Updated: 2023/06/08 11:16:06 by oozdiyar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
protected:
    std::string _type;
public:
    WrongCat();

    WrongCat(WrongCat const& src);

    WrongCat& operator=(WrongCat const& wcat);

    virtual ~WrongCat();

    std::string const& getType() const;

    virtual void makeSound() const;
};

#endif