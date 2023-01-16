/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:57:14 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/03 17:57:14 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void)
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}   

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";Withdrawals:" << getNbWithdrawals() << "\n";
}

Account::Account( int initial_deposit )
{
	if (initial_deposit < 0)
		return ;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "indexe:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created\n";	
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << "closed\n";
}

void	Account::_displayTimestamp( void )
{
	time_t	time_pt;
	time_pt = time(NULL);

	tm* tm_locale = localtime(&time_pt);
	std::cout << "[";
	std::cout << tm_locale->tm_year + 1900 << tm_locale->tm_mon << tm_locale->tm_mday;
	std::cout << "_";
	std::cout << tm_locale->tm_hour << tm_locale->tm_min << tm_locale->tm_sec;
	std::cout << "] ";
}

void	Account::makeDeposit ( int deposit )
{
	if (deposit <= 0)
	{
		std::cout << "Error deposit !\n";
		return ;
	}
	this->_nbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex; 
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount + deposit;
	std::cout <<";nb_deposits:" << this->_nbDeposits << "\n"; 
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}


bool	Account::makeWithdrawal ( int withdrawal )
{
	Account::_displayTimestamp();
	if (withdrawal <= 0 || withdrawal > this->_amount)
	{
		std::cout << "index:" <<this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount << ";withdrawal:refused\n";
		return false;
	}
	this->_nbWithdrawals += 1;
	std::cout << "index:" <<this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount - withdrawal;
	std::cout <<";nb_withdrawals:" << this->_nbWithdrawals << "\n"; 
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return true;
}

int	Account::checkAmount ( void ) const
{
	return (this->_amount);
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:";
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}