/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:59:59 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/26 15:12:18 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const &character)
{
    std::cout << "Character copy constructor called" << std::endl;
	(*this) = character;
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor called" << std::endl;
	this->name = name;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete(this->item[i]);
}



std::string const &Character::getName() const
{
	return (this->name);
}

void Character::setName(std::string name)
{
	this->name = name;
}



Character& Character::operator = (Character const &character)
{
    for (int i = 0; i < 4; i++)
		this->item[i] = character.item[i];
	return (*this);
}



void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->item[i])
		{
			this->item[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 256; i++)
	{
		if (!this->floor[i])
		{
			this->floor[i] = this->item[idx];
			delete(this->item[idx]);
			break;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	this->item[idx]->use(target);
}