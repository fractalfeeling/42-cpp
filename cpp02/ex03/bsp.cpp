/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:37:38 by lwee              #+#    #+#             */
/*   Updated: 2023/06/18 17:37:38 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool SameSide(Point p1, Point p2, Point a, Point b)
{
    Fixed cp1 = (b.getX() - a.getX()) * (p1.getY() - a.getY()) - (b.getY() - a.getY()) * (p1.getX() - a.getX());
    Fixed cp2 = (b.getX() - a.getX()) * (p2.getY() - a.getY()) - (b.getY() - a.getY()) * (p2.getX() - a.getX());
    return cp1 * cp2 >= Fixed(0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    return SameSide(point, a, b, c) && SameSide(point, b, a, c) && SameSide(point, c, a, b);
}