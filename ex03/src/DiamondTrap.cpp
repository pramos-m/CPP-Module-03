/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:37:07 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/17 16:52:41 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap( void ): ClapTrap( "Unnamed_clap_name" ), \
	ScavTrap( "Unnamed" ), FragTrap( "Unnamed" )
{
	std::cout << "DiamondTrap -> Unnamed: Default constructor called" \
		<< std::endl;
	this->_name = "Unamed";
	this->setHPts( this->FragTrap::getHPts() );
	this->setEPts( this->ScavTrap::getEPts() );
	this->setADmg( this->FragTrap::getADmg() );
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap( name + "_clap_name" ), \
	ScavTrap( name ), FragTrap( name )
{
	std::cout << "DiamondTrap -> " << name \
		<< ": String constructor called" << std::endl;
	this->setName( name );
	this->setHPts( this->FragTrap::def_hpts );
	this->setEPts( this->ScavTrap::def_epts );
	this->setADmg( this->FragTrap::def_admg );
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamond ): \
	ClapTrap( diamond.getName() + "_clap_name" ), ScavTrap( diamond.getName() ), \
	FragTrap( diamond.getName() )
{
	std::cout << "DiamondTrap -> " << diamond.getName() \
		<< ": Copy constructor called" << std::endl;
	*this = diamond;
}

// Deconstructors
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap -> " << this->getName() \
		<< ": Destructor called" << std::endl;
}

// Overloaded Operators
DiamondTrap& DiamondTrap::operator=( const DiamondTrap& diamond )
{
	std::cout << "DiamondTrap -> " << diamond.getName() \
		<< ": Assignation operator called" << std::endl;
	if ( this != &diamond )
	{
		this->setName( diamond.getName() );
		this->setClapTrapName( diamond.getClapTrapName() );
		this->setHPts( diamond.getHPts() );
		this->setEPts( diamond.getEPts() );
		this->setADmg( diamond.getADmg() );
	}
	return ( *this );
}

std::ostream&	operator<<( std::ostream& out, DiamondTrap& diamond )
{
	out << "Name: " << diamond.getName() << " ClapTrap Name: " \
		<< diamond.getClapTrapName() << " Hit points: " \
		<< diamond.getHPts() << " Energy Points: " << diamond.getEPts() \
		<< " Attack Damage: " << diamond.getADmg();
	return ( out );
}

// Public Methods
void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap -> Who am I: diamondtrap == " \
		<< this->getName() << ", claptrap == " \
		<< this->getClapTrapName() << std::endl;
}

// Getter
std::string	DiamondTrap::getClapTrapName( void ) const
{
	return ( this->ClapTrap::_name );
}

std::string	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

// Setter
void	DiamondTrap::setName( std::string name )
{
	this->_name = name;
	this->setClapTrapName( name );
}

void	DiamondTrap::setClapTrapName( std::string name )
{
	this->ClapTrap::_name = name + "_clap_name";
}
