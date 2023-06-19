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

#include "DiamondTrap.hpp"

int main(void)
{   
	DiamondTrap diamond("D14M0NDTR4P");

	diamond.attack("Handsome Jack");
	diamond.takeDamage(6);
	diamond.beRepaired(8);
	diamond.takeDamage(17);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
}
