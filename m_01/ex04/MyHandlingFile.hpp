/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyHandlingFile.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:27:09 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 19:39:24 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HANDLING_FILE_HPP
# define MY_HANDLING_FILE_HPP
# include <iostream>
# include <fstream>

class MyHandlingFile {
	public:
		std::string replaceStrInFile(std::string filename, std::string str1, std::string str2);
		MyHandlingFile( void );
		~MyHandlingFile( void );
};

#endif
