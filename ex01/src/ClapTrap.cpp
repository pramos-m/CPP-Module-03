/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:26:11 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:26:26 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	"ClapTrap.hpp"
#include	<iostream>

std::string	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

unsigned int	ClapTrap::getHPts( void ) const
{
	return ( this->_hPts );
}

unsigned int	ClapTrap::getEPts( void ) const
{
	return ( this->_ePts );
}

unsigned int	ClapTrap::getADmg( void ) const
{
	return ( this->_aDmg );
}

void	ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void	ClapTrap::setHPts( unsigned int hPts )
{
	this->_hPts = hPts;
}

void	ClapTrap::setEPts( unsigned int ePts )
{
	this->_ePts = ePts;
}

void	ClapTrap::setADmg( unsigned int aDmg )
{
	this->_aDmg = aDmg;
}
