/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:09:48 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/26 16:09:48 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error : programms should take one argument\n";
		return (0);
	}
	Converter conv(argv[1]);
	conv.toChar();
	conv.toInt();
	conv.toFloat();
	conv.toDouble();
	return (0);
}