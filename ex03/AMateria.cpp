/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/24 01:00:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout<< "AMateria constructor called" <<std::endl;
}

AMateria::~AMateria()
{
	std::cout<< "AMateria destructor called" <<std::endl;
}



std::string const &AMateria::getType() const
{
    
}
