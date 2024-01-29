/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:15:44 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/29 11:53:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *archive[4];
		
	public:
        void learnMateria(AMateria *materia);
        AMateria* createMateria(std::string const &type);

		MateriaSource(MateriaSource const &materiaSource);
		MateriaSource();
		~MateriaSource();
};