/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:09:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 15:56:52 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout<< "Dog constructor called" <<std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout<< "Dog destructor called" <<std::endl;
}



void Dog::makeSound() const
{
    std::cout<< "Bark!" <<std::endl;
}