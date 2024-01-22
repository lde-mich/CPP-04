/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:10:26 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 19:13:53 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    
//     delete j;
//     delete i;
    
//     return 0;
// }


int main()
{
    Animal *animals[10];
    
    for(int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    for(int i = 0; i < 10; i++)
        delete(animals[i]);
        
    return (0);
}
