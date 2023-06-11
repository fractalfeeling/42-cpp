/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:29:10 by lwee              #+#    #+#             */
/*   Updated: 2023/06/06 19:29:10 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    } else {
        for (int i = 1; i < argc; i++) {
            std::string message(argv[i]);
            for (size_t j = 0; j < message.length(); j++) {
                if (std::islower(message[j]))
                    message[j] = std::toupper(message[j]);
            }
            std::cout << message << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
