/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:14:58 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 12:34:25 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain desstructor" << std::endl;
	return ;
}

std::string		Brain::identify(void) const {
	std::stringstream ss;
	ss << this; 
	return (ss.str());
}
