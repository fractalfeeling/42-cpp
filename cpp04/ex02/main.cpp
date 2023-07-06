/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:41:28 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 21:41:28 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();
    std::cout << std::endl;

    delete j; // should not create a leak
    delete i;
    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << std::endl;

    const AAnimal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }

    AAnimal *animal = new AAnimal();

    return 0;
}