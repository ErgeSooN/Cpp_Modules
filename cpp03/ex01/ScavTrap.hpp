/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:54:00 by oozdiyar          #+#    #+#             */
/*   Updated: 2023/06/05 14:54:00 by oozdiyar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap // Miras
{
public:
    // Constructors
    bool guard_mode;
    ScavTrap();
    ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const& src);

    ScavTrap& operator=(ScavTrap const& scav);

    ~ScavTrap();

    //actions
    void guardGate(void);
    void attack(const std::string enemy);
};

#endif
