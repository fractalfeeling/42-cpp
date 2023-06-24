/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:39:02 by lwee              #+#    #+#             */
/*   Updated: 2023/06/24 21:39:02 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& src) {
    *this = src;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs) {
    if (this != &rhs){
        _type = rhs._type;
    }
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}