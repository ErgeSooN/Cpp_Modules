/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman   <ayaman  @student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:53:19 by ayaman            #+#    #+#             */
/*   Updated: 2023/06/05 14:53:19 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoint;
	unsigned int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string const& name);
	ClapTrap(const ClapTrap &clap);
	ClapTrap &operator=(const ClapTrap &clap);
	~ClapTrap();

	std::string const& getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	void attack(std::string const& enemy);
 	void takeDamage(unsigned int amount);
 	void beRepaired(unsigned int amount);

	bool isAlive(void) const;
};

#endif