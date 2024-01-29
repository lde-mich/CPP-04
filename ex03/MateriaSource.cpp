/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:15:09 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/29 11:55:14 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	// std::cout << "IMateriaSource constructor called" << std::endl;
}



MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 2; i++)
		delete(this->archive[i]);
}



void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->archive[i])
		{
			this->archive[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *temp = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (this->archive[i] && this->archive[i]->getType() == type)
		{
			temp = this->archive[i]->clone();
			break;
		}
			
	}
}