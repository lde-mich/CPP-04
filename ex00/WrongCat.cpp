/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:27 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 15:21:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout<< "Cat constructor called" <<std::endl;
    this->type = "Cat";
}

WrongCat::~WrongCat()
{
    std::cout<< "Cat destructor called" <<std::endl;
}



void WrongCat::makeSound()
{
    std::cout<< "Miao" <<std::endl;
}






















