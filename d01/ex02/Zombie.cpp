/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 12:06:37 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 16:15:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Zombie: " << this->_name << " is born" << std::endl;
	return ;
}

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "A Zombie die" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
	return ;
}
