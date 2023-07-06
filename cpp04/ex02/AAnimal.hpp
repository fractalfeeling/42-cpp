/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:12:02 by lwee              #+#    #+#             */
/*   Updated: 2023/06/23 20:12:02 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class Brain;

class AAnimal
{
public:
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);
    virtual ~AAnimal();

    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual Brain *getBrain() const = 0;

protected:
    AAnimal();
    std::string _type;
};

#endif