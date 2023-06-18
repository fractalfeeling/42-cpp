/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:26:52 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 15:26:52 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

#include "Point.hpp"

int main() {
    // Test case 1: Inside the triangle
    if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15))) {
        std::cout << "Test Case 1: Inside the triangle\n";
    } else {
        std::cout << "Test Case 1: Outside the triangle\n";
    }

    // Test case 2: Outside the triangle
    if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15))) {
        std::cout << "Test Case 2: Inside the triangle\n";
    } else {
        std::cout << "Test Case 2: Outside the triangle\n";
    }

    return 0;
}
