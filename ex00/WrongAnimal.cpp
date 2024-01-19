/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:15 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 15:18:38 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "WrongAnimal constructor called" <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<< "WrongAnimal type constructor called" <<std::endl;
    this->type = type;
}



std::string WrongAnimal::getType()
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}



void WrongAnimal::makeSound()
{
    
}






















