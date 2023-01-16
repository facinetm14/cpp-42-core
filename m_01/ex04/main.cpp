/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:59:36 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/23 01:48:04 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHandlingFile.hpp"


int main ( void )
{
	MyHandlingFile handler;
	std::string cpy_name;
	cpy_name = handler.replaceStrInFile("file.txt", "", "");
	std::cout << "cpy_name : " << cpy_name << "\n";
	return (0);
}