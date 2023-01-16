/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyHandlingFile.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:36:15 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/23 01:53:11 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHandlingFile.hpp"

MyHandlingFile::MyHandlingFile( void )
{
	
}

MyHandlingFile::~MyHandlingFile( void )
{
	
}

std::string MyHandlingFile::replaceStrInFile(std::string filename, 
								std::string str1, std::string str2)
{
	std::fstream fin;
	std::fstream fout;
	std::string cpy_name = "", line, data = "";
	int cursor;
	
	fin.open(filename, std::ios::in);
	if (!fin)
	{
		std::cout << "file doesn't exist !\n";
		return (cpy_name);
	}
	cpy_name = filename + ".replace";
	while (getline(fin, line))
	{
		if (data == "")
			data += line;
		else
			data += "\n" + line;
		cursor = data.find(str1);
		if (cursor < 0 || str1 == "")
			continue;
		data = data.substr(0, cursor) + str2 + \
		data.substr(cursor + str1.length(), data.length() - (cursor + str1.length()));
		
	}
	fin.close();
	fout.open(cpy_name, std::ios::out);
	fout << data;
	fout.close();
	return (cpy_name);
}