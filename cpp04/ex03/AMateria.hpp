/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:54:13 by lwee              #+#    #+#             */
/*   Updated: 2023/06/23 21:54:13 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(const std::string &type);
    AMateria(const AMateria &src);
    ~AMateria();
    AMateria &operator=(const AMateria &rhs);

    const std::string &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif