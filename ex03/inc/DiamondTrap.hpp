/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:37:38 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/17 17:38:32 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
# define __DIAMONDTRAP_H__

# include	<iostream>
# include	<string>
# include	"../inc/ScavTrap.hpp"
# include	"../inc/FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		void		setClapTrapName( std::string name );
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& diamond );
		~DiamondTrap( void );
		DiamondTrap&	operator=( const DiamondTrap& diamond );
		void			whoAmI( void );
		std::string		getName( void ) const;
		std::string		getClapTrapName( void ) const;
		void			setName( std::string name );
};

std::ostream&	operator<<( std::ostream& out, DiamondTrap& diamond );

#endif
