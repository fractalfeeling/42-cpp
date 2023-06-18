/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:51:44 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 19:51:44 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " is constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destructed!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " high fives everybody!" << std::endl;
}