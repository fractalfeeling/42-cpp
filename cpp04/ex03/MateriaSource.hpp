/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:19:13 by lwee              #+#    #+#             */
/*   Updated: 2023/07/07 01:19:13 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int _Size;
    AMateria **_Sources;

public:
    MateriaSource();
    MateriaSource(const MateriaSource &src);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &rhs);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif