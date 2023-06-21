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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int animalCount = 10;  // Total count of animals

    // Dynamically allocate an array of Animal pointers
    Animal** animals = new Animal*[animalCount];

    // Half of the array will be Dog objects and the other half will be Cat objects
    for (int i = 0; i < animalCount; ++i) {
        if (i < animalCount / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    // Perform a deep copy test
    Dog originalDog;
    Dog copiedDog = originalDog;  // Copy constructor should be called here
    copiedDog.getBrain()->setIdea(0, "Copied Dog Idea");  // Should not modify originalDog's idea

    // Loop over the array and delete every Animal
    for (int i = 0; i < animalCount; ++i) {
        delete animals[i];
    }

    // Delete the array itself
    delete[] animals;

    // No memory leak should occur, and the appropriate destructors should be called in the expected order
    return 0;
}