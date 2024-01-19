/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 14:33:14 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout<< "Cat constructor called" <<std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout<< "Cat destructor called" <<std::endl;
}



void Cat::makeSound()
{
    std::cout<< "Miao" <<std::endl;
}