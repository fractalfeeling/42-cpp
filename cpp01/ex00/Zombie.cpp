/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:05:33 by lwee              #+#    #+#             */
/*   Updated: 2023/06/07 00:05:33 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "A zombie appeared!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "A zombie named " << _name << " appeared!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " has died!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
