/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:15:09 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/26 14:25:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}



void MateriaSource::learnMateria(AMateria*)
{
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}