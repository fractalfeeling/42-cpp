/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:59:50 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 19:59:50 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>
#include <fstream>

class FileHandler
{
    private:
        std::string filename, s1, s2;
        std::ifstream infile;
        std::ofstream outfile;
        std::string readFile();
        std::string replaceString(const std::string& str);

    public:
        FileHandler(const std::string& filename, const std::string& s1, const std::string& s2);
        ~FileHandler();
        bool processFile();
};

#endif
