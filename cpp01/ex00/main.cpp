/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:12:17 by lwee              #+#    #+#             */
/*   Updated: 2023/06/07 00:12:17 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int main() {
    Zombie stackZombie("Stack Zombie");
    stackZombie.announce();

    Zombie* heapZombie = new Zombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("Random Zombie");

    return 0;
}
