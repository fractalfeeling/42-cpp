/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:19:43 by lwee              #+#    #+#             */
/*   Updated: 2023/06/23 22:19:43 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return *this;
}

const std::string &AMateria::getType() const
{
    return _type;
}