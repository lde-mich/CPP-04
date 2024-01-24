/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:36:00 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/24 01:12:35 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        
        std::string const & getType() const;
        
        AMateria(std::string const & type);
		~AMateria();
};

class Cure: public AMateria
{
    private:

    public:
		AMateria* clone() const;
        void use(ICharacter& target);
	
		Cure();
		Cure(Cure const &cure);
		~Cure();
}

class Ice: public AMateria
{
    private:

    public:
		AMateria* clone() const;

        void use(ICharacter& target);
	
		Ice();
		Ice(Ice const &ice);
		~Ice();
}