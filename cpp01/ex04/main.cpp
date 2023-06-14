/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:00:27 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 20:00:27 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./program <filename> <string1> <string2>\n";
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    FileHandler fileHandler(filename, s1, s2);
    if (!fileHandler.processFile()) {
        std::cerr << "Failed to process the file\n";
        return 1;
    }

    std::cout << "File processed successfully\n";
    return 0;
}