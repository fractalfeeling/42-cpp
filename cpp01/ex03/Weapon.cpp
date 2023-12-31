/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:39:46 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 00:39:46 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string&  Weapon::getType()
{
    return _type;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}