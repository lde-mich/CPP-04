/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:36:00 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/23 15:03:28 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
    
    public:
    
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        
        std::string const & getType() const;
        
        AMateria(std::string const & type);
		~AMateria();
};
