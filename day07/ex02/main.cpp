/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 00:53:32 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 00:53:33 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	Array<std::string, 50> Array;
	std::cout << Array.getSize() << std::endl;

	return (0);
}