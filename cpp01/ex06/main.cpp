/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:38:58 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 20:38:58 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

LogLevel stringToLogLevel(const std::string& level) {
    if(level == "DEBUG")     return DEBUG;
    if(level == "INFO")      return INFO;
    if(level == "WARNING")   return WARNING;
    if(level == "ERROR")     return ERROR;
    return INVALID;
}

int main(int argc, char** argv) {
    if(argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <log level>" << std::endl;
        return 1;
    }

    Harl h;
    switch(stringToLogLevel(argv[1])) {
        case DEBUG:
            h.debug();
            // fall through
        case INFO:
            h.info();
            // fall through
        case WARNING:
            h.warning();
            // fall through
        case ERROR:
            h.error();
            break;
        default:
            std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
            return 1;
    }
    return 0;
}
