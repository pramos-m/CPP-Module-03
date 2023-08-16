/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:37:03 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:26:35 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>
#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"

int	main( void )
{
	print_next_test( "ClapTrap test" );
	test_clap();

	print_next_test( "ScravTrap test" );
	test_scav();

	return ( 0 );
}
