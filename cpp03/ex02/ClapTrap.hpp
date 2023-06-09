/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozdiyar <oozdiyar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:55:52 by oozdiyar          #+#    #+#             */
/*   Updated: 2023/06/05 14:55:52 by oozdiyar         ###   ########.fr       */
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
	ClapTrap(const ClapTrap &clap);
	ClapTrap(std::string const& name);
	ClapTrap(std::string const& name, int hitPoints, int energyPoints, int attackDamage);
	
	//assignment operator
	ClapTrap &operator=(const ClapTrap &clap);
	
	//destructor
	~ClapTrap();

	//getters
	std::string const& getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	//setters
    void setEnergyPoint();

	void attack(std::string const& enemy);
 	void takeDamage(unsigned int amount);
 	void beRepaired(unsigned int amount);

	//helper
	bool isAlive(void) const;
};

#endif