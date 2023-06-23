/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:22:31 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 21:22:31 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), _brain(new Brain(*other._brain)) {
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    std::cout << "Cat assignment operator called." << std::endl;
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Prrrrrrrrrp" << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}