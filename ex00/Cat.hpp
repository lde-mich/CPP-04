/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:48 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 15:08:10 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		void makeSound() const;
		Cat  operator = (Cat const &cat);
		
		Cat();
		Cat(Cat const &cat);
		~Cat();
		
};


