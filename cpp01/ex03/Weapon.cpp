/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:39:46 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 00:39:46 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

const std::string& Weapon::getType() {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}