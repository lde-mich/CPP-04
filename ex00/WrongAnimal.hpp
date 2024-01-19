/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:09:58 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 15:15:29 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		void makeSound();

		std::string getType();
		void setType(std::string type);

		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
};






















