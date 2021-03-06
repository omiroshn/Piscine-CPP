/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:00:01 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 16:00:02 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try {
			Bureaucrat a("Bot", 1);
			ShrubberyCreationForm b("home");

			std::cout << b;
			std::cout << a;
			a.signForm(b);
			b.execute(a);
		 }
		 catch (std::exception &e)
		 {
			std::cout << e.what() << std::endl;
		 }
	}
	std::cout << "=================================" << std::endl;
	{
		try
		{
			Bureaucrat a("Bot", 1);
			RobotomyRequestForm b("home");

			std::cout << b;
			std::cout << a;
			a.signForm(b);
			b.execute(a);

			Bureaucrat c("Bot", 150);
			RobotomyRequestForm d("home2");

			std::cout << d;
			std::cout << c;
			c.signForm(d);
			d.execute(c);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=================================" << std::endl;
	{
		try
		{
			Bureaucrat a("Bot", 1);
			PresidentialPardonForm b("home");

			std::cout << b;
			std::cout << a;
			a.signForm(b);
			b.execute(a);

			Bureaucrat c("Bot", 150);
			PresidentialPardonForm d("home2");

			std::cout << d;
			std::cout << c;
			d.execute(c);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
