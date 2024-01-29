/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:20:49 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/29 11:54:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    private:
		AMateria *item[4];
		AMateria *floor[256];
		std::string name;
		
    public:
		Character& operator = (Character const &character);
		
		std::string const & getName() const;
		void setName(std::string name);

		void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

		Character(Character const &character);
		Character(std::string name);
		Character();
		~Character();
};
