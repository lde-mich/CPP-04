/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 14:02:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout<< GREEN << "Cat constructor called" << RESET <<std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &cat): Animal()
{
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
	(*this) = cat;
}

Cat::~Cat()
{
    std::cout<< RED << "Cat destructor called" << RESET <<std::endl;
}



void Cat::makeSound() const
{
    std::cout<< "Meow!" <<std::endl;
}