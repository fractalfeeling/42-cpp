/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:12:22 by lwee              #+#    #+#             */
/*   Updated: 2023/06/07 00:12:22 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
