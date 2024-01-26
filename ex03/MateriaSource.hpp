/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:15:44 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/26 14:24:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: IMateriaSource
{
	private:
		
	public:
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

		MateriaSource(MateriaSource const &materiaSource);
		MateriaSource();
		~MateriaSource();
};