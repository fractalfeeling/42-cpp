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

#include "Zombie.h"

int main(void) {
    Zombie* horde3 = zombieHorde(3, "Cranberry");
    delete [] horde3;
    Zombie* horde5 = zombieHorde(5, "Strawberry");
    delete [] horde5;
}