/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:09:19 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 16:13:30 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;		
    public:
		void makeSound() const;
		
		Dog();
		Dog(Dog const &dog);
		~Dog();
};
