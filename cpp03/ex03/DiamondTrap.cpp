/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:02:59 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 19:02:59 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;

    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << "has been destructed!" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "I am a DiamondTrap named " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}