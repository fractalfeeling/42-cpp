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
#include "FragTrap.hpp"

int main(void)
{   
	{
		FragTrap frag("FR4GTR4P");

		frag.attack("Handsome Jack");
		frag.beRepaired(4);
		frag.takeDamage(3);
		frag.highFivesGuys();
	}
	{
		ScavTrap scav("SC4VTR4P");

		scav.attack("Handsome Jack");
		scav.beRepaired(4);
		scav.takeDamage(3);
		scav.guardGate();
	}
	{
		ClapTrap clap("CL4PTR4P");

		clap.attack("Handsome Jack");
		clap.beRepaired(4);
		clap.takeDamage(3);
	}
}