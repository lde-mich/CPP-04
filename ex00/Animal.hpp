/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:07:57 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 14:10:18 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        void makeSound();

        std::string getType();
        void setType(std::string type);

        Animal();
        Animal(std::string type);
        ~Animal();
};

