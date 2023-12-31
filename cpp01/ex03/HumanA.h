/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:44:05 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 00:44:05 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;
    
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        
        void    attack() const;
};

#endif