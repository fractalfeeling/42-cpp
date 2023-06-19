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
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // correct behavior
    std::cout << "<--------Correct Behaviour-------->" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

    // incorrect behavior
    std::cout <<"\n<-------Incorrect Behaviour------->" << std::endl;
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* wj = new WrongCat();
    std::cout << wj->getType() << " " << std::endl;
    meta->makeSound();
    wj->makeSound();

    delete meta;
    delete wj;

    return 0;
}