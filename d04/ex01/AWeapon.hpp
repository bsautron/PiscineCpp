/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 16:45:07 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:04:10 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP 
# define AWEAPON_HPP

# include <iostream>

class	AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);

		std::string 	& getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;

	private:
		AWeapon(void);
		AWeapon(AWeapon const & src);

		AWeapon			& operator=(AWeapon const & right);

		std::string const	& _name;
		int					_apcost;
		int					_damage;

};

#endif

