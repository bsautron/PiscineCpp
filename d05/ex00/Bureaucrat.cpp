/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 19:00:39 by bsautron          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/06/22 20:43:49 by bsautron         ###   ########.fr       */
=======
/*   Updated: 2015/06/22 19:55:32 by bsautron         ###   ########.fr       */
>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*-------------- Constructors -------------*/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
<<<<<<< HEAD
=======

>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
<<<<<<< HEAD
		else if (this->_grade + 1 > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
=======
		else if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
<<<<<<< HEAD
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
=======
>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813

	return ;
}


/*--------------- Destructors --------------*/
Bureaucrat::~Bureaucrat(void) {
	//std::cout << "Bureaucrat: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
<<<<<<< HEAD
std::ostream		& operator<<(std::ostream & o, Bureaucrat const & right) {
	o << right.getName() << ", bureaucrat grade " << right.getGrade();
	return (o);
}
=======
>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813


/*------------------ Geter -----------------*/
std::string const	Bureaucrat::getName(void) const {
	return (this->_name);
}
int					Bureaucrat::getGrade(void) const {
	return (this->_grade);
}



/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void				Bureaucrat::incrementGrade(void) {
	try
	{
		if (this->_grade - 1 < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
}

void				Bureaucrat::decrementGrade(void) {
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
}


Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw() {
	return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw() {
	return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}
