/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:07:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 13:31:09 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal constructor called" <<std::endl;
}

Animal::~Animal()
{
    
}



std::string Animal::getType()
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}



void Animal::makeSound()
{
    
}













