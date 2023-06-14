/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:23:09 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 20:23:09 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
};

class Harl
{
    public:
        Harl();
        ~Harl();
        void debug();
        void info();
        void warning();
        void error();
};
