/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:32:57 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 16:08:18 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP 
# define VICTIM_HPP

# include <iostream>

class	Victim
{
	public:
		Victim(std::string name);
		Victim(Victim const & src);
		~Victim(void);

		Victim		& operator=(Victim const & right);

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	protected:
		Victim(void);
		std::string		_name;

};

std::ostream		&operator<<(std::ostream & o, Victim const & right);

#endif

