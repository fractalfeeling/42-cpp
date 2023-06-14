/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:00:04 by lwee              #+#    #+#             */
/*   Updated: 2023/06/14 20:00:04 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <sstream>

FileHandler::FileHandler(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {
    infile.open(filename.c_str());
    outfile.open((filename + ".replace").c_str());
}

FileHandler::~FileHandler() {
    if (infile.is_open()) {
        infile.close();
    }
    if (outfile.is_open()) {
        outfile.close();
    }
}

bool FileHandler::processFile() {
    if (!infile) {
        return false;
    }
    std::string content = readFile();
    std::string replacedContent = replaceString(content);
    outfile << replacedContent;
    return true;
}

std::string FileHandler::readFile() {
    std::stringstream buffer;
    buffer << infile.rdbuf();
    return buffer.str();
}

std::string FileHandler::replaceString(const std::string& str) {
    std::string result;
    std::string::size_type start = 0;
    std::string::size_type pos;
    while ((pos = str.find(s1, start)) != std::string::npos) {
        result += str.substr(start, pos - start) + s2;
        start = pos + s1.size();
    }
    result += str.substr(start);
    return result;
}
