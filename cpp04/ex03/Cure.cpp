/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:26:12 by lwee              #+#    #+#             */
/*   Updated: 2023/06/24 21:26:12 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& src) {
    *this = src;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs) {
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}

AMateria*   Cure::clone() const {
    return (new Cure());
}

void    Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}