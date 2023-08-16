/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:25:16 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:25:18 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__

# include	<string>
# include	<iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hPts;
		unsigned int	_ePts;
		unsigned int	_aDmg;
	public:
		ClapTrap( void );
		ClapTrap( const ClapTrap& clap );
		ClapTrap( std::string name );
		ClapTrap( std::string name, unsigned int hPts, unsigned int ePts, \
			unsigned int aDmg );
		~ClapTrap( void );
};

std::ostream&	operator<<( std::ostream& out, ClapTrap& clap );

#endif
