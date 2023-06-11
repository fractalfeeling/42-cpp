/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:12:22 by lwee              #+#    #+#             */
/*   Updated: 2023/06/07 00:12:22 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(const std::string& name);
    ~Zombie();
    void announce();

private:
    std::string name;
};

void randomChump(const std::string& name);

#endif // ZOMBIE_HPP