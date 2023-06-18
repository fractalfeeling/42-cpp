/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:36:33 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 17:36:33 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Point.hpp
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &source);
        Point &operator=(Point const &rhs);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
