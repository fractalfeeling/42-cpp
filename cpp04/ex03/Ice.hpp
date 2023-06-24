/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:28:42 by lwee              #+#    #+#             */
/*   Updated: 2023/06/24 18:28:42 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice& src);
    ~Ice();
    Ice& operator=(const Ice& rhs);

    AMateria*   clone() const;
    void        use(ICharacter& target);     
};

#endif