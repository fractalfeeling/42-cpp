/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:11:57 by lwee              #+#    #+#             */
/*   Updated: 2023/06/23 20:11:57 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("")
{
    std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
    std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    std::cout << "AAnimal assignment operator called." << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}

void AAnimal::makeSound() const
{
    std::cout << "*Unidentifiable screech*" << std::endl;
}
