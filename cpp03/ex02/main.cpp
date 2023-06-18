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

#include "FragTrap.hpp"

int main(void)
{   
    FragTrap frag("FR4GTR4P");

    frag.attack("Handsome Jack");
    frag.takeDamage(6);
    frag.beRepaired(4);
    frag.takeDamage(3);
    frag.highFivesGuys();
    frag.beRepaired(8);
    frag.takeDamage(17);
}