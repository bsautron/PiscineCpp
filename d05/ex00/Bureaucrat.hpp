/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 17:05:53 by bsautron          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/06/22 20:38:17 by bsautron         ###   ########.fr       */
=======
/*   Updated: 2015/06/22 19:55:34 by bsautron         ###   ########.fr       */
>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP 
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);


		std::string const	getName(void) const;
		int					getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		class		GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const & src) throw();
				~GradeTooHighException(void) throw();


				const char			*errorGrade(void){
					return ("Grade too hight!");
				}

			private:
				GradeTooHighException	& operator=(GradeTooHighException const & right);

		};

		class		GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const & src) throw();
				~GradeTooLowException(void) throw();

				const char			*errorGrade(void) {
					return ("Grade too low!");
				}

			private:
				GradeTooLowException	& operator=(GradeTooLowException const & right);
		};


	private:
		Bureaucrat		& operator=(Bureaucrat const & right);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(void);

		std::string const	_name;
		int					_grade;

};

<<<<<<< HEAD
std::ostream		& operator<<(std::ostream & o, Bureaucrat const & right);

#endif
=======
#endif

>>>>>>> ecb46ad174ae152e27591188689bcd30ba5b7813
