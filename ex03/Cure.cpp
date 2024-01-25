/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:18 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/25 12:36:05 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &cure)
{
    std::cout << "Cure copy constructor called" << std::endl;
    (*this) = cure;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}


void Cure::use(ICharacter& target)
{
    
}


Cure  &Cure::operator = (Cure const &cure)
{
	this->type = cure.getType();
    return (*this);
}


AMateria* Cure::clone() const
{
    AMateria* cure = new Cure(*this);

    return (cure);
}