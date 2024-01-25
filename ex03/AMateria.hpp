/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:36:00 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/25 12:27:12 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
		std::string type;
    public:
    
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        AMateria& operator = (AMateria const &aMateria);
        
        std::string const & getType() const;
        
        AMateria();
        AMateria(std::string const & type);
		~AMateria();
};
