/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:07:57 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 15:54:43 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        void makeSound() const;

        std::string getType() const;
        void setType(std::string type);

        Animal();
        Animal(std::string type);
        ~Animal();
};

