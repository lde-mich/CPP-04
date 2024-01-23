/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:10:26 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/23 12:13:09 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* ii = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl; //Dog
    std::cout << i->getType() << " " << std::endl; //Cat
    std::cout << ii->getType() << " " << std::endl; //WrongCat
	
    i->makeSound(); 
    j->makeSound();
    
    ii->makeSound();

    delete (j);
    delete (i);
    delete (ii);
	
    return 0;
}
