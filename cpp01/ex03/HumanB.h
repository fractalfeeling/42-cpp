/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:54:39 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 18:54:39 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;
    
    public:
        HumanB(std::string name);
        ~HumanB();

        void    setWeapon(Weapon& weapon);
        void    attack() const;
};

#endif