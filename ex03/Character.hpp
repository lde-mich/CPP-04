/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:20:49 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/26 11:59:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: ICharacter
{
    private:
		AMateria *item[4];
		std::string name;
		
    public:
		Character& operator = (Character const &character);
		
		std::string const & getName() const;
		void setName(std::string name);

		Character(Character const &character);
		Character();
		~Character();
};
