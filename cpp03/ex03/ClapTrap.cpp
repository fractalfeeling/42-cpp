/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:54:38 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 17:54:38 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : 
    _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " is constructed!" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " has been destructed!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
    *this = source;
    std::cout << "ClapTrap " << this->_name << " has been copied with the copy constructor." << std::endl;
    return ;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& source)
{
    if (this != &source) // Protect against self-assignment
    {
        this->_name = source._name;
        this->_hitPoints = source._hitPoints;
        this->_energyPoints = source._energyPoints;
        this->_attackDamage = source._attackDamage;
        std::cout << "ClapTrap " << this->_name << " has been copied with copy assignment operator." << std::endl;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= (int)amount)
    {
        std::cout << "ClapTrap " << this->_name << " is killed!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage!" << std::endl;
    this->_hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap is repaired for " << amount << " hit points!" << std::endl;
    this->_hitPoints += amount;
    if (this->_hitPoints > 10)
        this->_hitPoints = 10;
    this->_energyPoints -= 1;
}

#endif