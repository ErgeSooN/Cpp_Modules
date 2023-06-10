/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:15:06 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/08 11:15:06 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(Brain const& src);
    ~Brain();
    Brain& operator=(Brain const& brain);

    /* Getter */
    std::string const& getIdea(int index) const;

    /* Setter */
    void setIdea(int index, std::string const& idea);
};

#endif