/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:54:11 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 18:54:11 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack() const
{
    std::cout << _name;
    if (_weapon != NULL && _weapon->getType() != "")
        std::cout << " attacks with their " << _weapon->getType();
    else
        std::cout << " punches with their fists";
    std::cout << std::endl;
}