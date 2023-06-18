/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:29:42 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 18:29:42 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{   
    ScavTrap scav1 = ScavTrap("Fizz");
    ScavTrap scav2 = ScavTrap(scav1);

    scav2.attack("the air");
    scav2.takeDamage(10);
    scav2.beRepaired(10);
    scav2.guardGate();

    return 0;
}