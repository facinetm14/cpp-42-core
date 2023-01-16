/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:10:52 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/26 16:10:52 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <cstring>
#include <cmath>

class Converter
{
private:
    std::string _nb;
    char        *ptrEnd;
    bool        isNumeric;
    double        _double;
    int         _len;
    int         _fpoint;
	bool		pseudo;

public:
    Converter(std::string arg);
    ~Converter(void);

    bool    isNum(void);
    void    toDouble(void);
    void    toFloat(void);
    void    toInt(void);
    int    isPseudo(void);
	void	toChar(void);
};

int Converter::isPseudo(void)
{
	if (this->pseudo)
		return (1);
    std::string str = "";
    std::string pseudo[6] = {"inff", "+inff", "-inff", "inf", "+inf", "-inf"};
    int i = 0; 
    while (i < 6 && (this->_nb != pseudo[i]))
        i++;
    if (i == 6)
        return (0);
   if (i == 0 || i == 3)
		str = "inf";
	else if (i == 1 || i == 4)
		str = "+inf";
	else
		str = "-inf";

    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "double: " << str << "\n";
    std::cout << "float: " << str <<"f" << "\n";
	this->pseudo = 1;
	return (1);
}

bool Converter::isNum(void) 
{  
    int float_point = 0;
    int i = 0;

    while (i < this->_len && this->_nb[i] == 32)
        i++;
    if (i == this->_len -1 && i > 0)
        return (false);
    int before = i;
    while (i < this->_len)
    {
        if (!isdigit(this->_nb[i]))
        {
            if (this->_nb[i] == 'f' && i != before && i == this->_len - 1 && float_point == 1)
                return (true);
            if (this->_nb[i] != '-' && this->_nb[i] != '+' && this->_nb[i] != '.')
                return (false);
            if ((this->_nb[i] == '-' || this->_nb[i] == '+') && before != i)
                return (false);
            if (this->_nb[i] == '.')
            {
                float_point++;
                this->_fpoint = float_point;
                if (float_point > 1)
                    return (false);
            }
        }
        i++;
    }
    return (true);
}

Converter::Converter(std::string arg) : _nb(arg) {
    this->_fpoint = 0;
	this->pseudo = false;
    this->_len = this->_nb.size();
    this->isNumeric = this->isNum();

    if (this->isNumeric)
    {
        std::allocator <char> alloc;
        char *char_arr = alloc.allocate(this->_len);
        for (int i = 0; i < this->_len; i++)
            char_arr[i] = (this->_nb[i]);
        this->_double = strtod(char_arr, &this->ptrEnd);
        alloc.deallocate(char_arr, this->_len);
    }
}

Converter::~Converter(void) {}


void    Converter::toDouble()
{
    if (this->isPseudo())
        return;
    std::cout << "double: ";
    if (this->isNumeric)
    {
        std::cout << this->_double;
       if (this->_fpoint != 1 || (this->_fpoint == 1 && (this->_nb[this->_len - 1] == '.'
            || this->_nb[this->_len - 1] == '0')))
            std::cout << ".0";
        std::cout << "\n";
        return ;
    }
    if (this->_len > 1)
        std::cout << "nan\n";
    else
        std::cout << static_cast <double> (this->_nb[0]) << ".0\n";
}

void    Converter::toFloat(void)
{
	if (this->isPseudo())
        return;
    std::cout << "float: ";
    if (this->isNumeric)
    {
        std::cout << static_cast <float> (this->_double);
        if (this->_fpoint != 1 || (this->_fpoint == 1 && (this->_nb[this->_len - 1] == '.'
            || this->_nb[this->_len - 1] == '0')))
            std::cout << ".0";
        std::cout << "f\n";
        return ;
    }
    if (this->_len > 1)
        std::cout << "nanf\n";
    else
        std::cout << static_cast <float> (this->_nb[0]) << ".0f\n";

}

void        Converter::toInt(void)
{
	if (this->isPseudo())
        return;
     std::cout << "int: ";
    if (this->isNumeric)
    {
        std::cout << static_cast <int> (this->_double) << "\n";
        return ;
    }
    if (this->_len > 1)
        std::cout << "impossible\n";
    else
        std::cout << static_cast <int> (this->_nb[0]) << "\n";
}

void	Converter::toChar(void)
{
	if (this->isPseudo())
        return;
	std::cout << "char: ";
	if (this->isNumeric)
	{
		int char_value = floor(this->_double);
		if (isprint(char_value))
			std::cout << static_cast <char> (char_value);
		else
			std::cout << "Non displayable";
	}
	else if (this->_len == 1)
		std::cout << this->_nb;
	else
		std::cout << "impossible";
	std::cout << "\n";
}
#endif