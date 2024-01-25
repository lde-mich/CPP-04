/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:59:59 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/25 16:20:40 by lde-mich         ###   ########.fr       */
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

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}


Character& Character::operator = (Character const &character)
{
	
}