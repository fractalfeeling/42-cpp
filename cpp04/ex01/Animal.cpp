/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:02:32 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 21:02:32 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("") {
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout << "Animal assignment operator called." << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const {
    return _type;
}

void    Animal::makeSound() const {
    std::cout << "*Unidentifiable screech*" << std::endl;
}
