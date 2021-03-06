/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:16:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 11:50:26 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int life, int nbFeet) :
	_name(name),
	_life(life),
	_nbFeet(nbFeet)
{
	std::cout << "A poney (" << this->_name <<") is born, | " << this->_life << " pdv | " << this->_nbFeet << " feet" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " is die" << std::endl;
	return ;
}
