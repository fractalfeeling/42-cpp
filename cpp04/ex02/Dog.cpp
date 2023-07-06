/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:24:29 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 21:24:29 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    std::cout << "Dog assignment operator called." << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wooooooooooof" << std::endl;
}

Brain *Dog::getBrain() const
{
    return _brain;
}