/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:07:22 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/29 11:54:26 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << BGRED "[ SUBJECT TEST ]" RESET << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << BGRED "[ MORE TESTS ]" RESET << std::endl;
	std::cout << std::endl << BGRED "[ num test ]" RESET << std::endl;
	int e = 42;
	int f = 84;
	std::cout << GREEN << "Before:  " RESET << "c = " << e << " d = " << f << std::endl;
	::swap(e, f);
	std::cout << GREEN << "After: " RESET << " c = " << e << " d = " << f << std::endl;
	std::cout << GREEN "Min num: " RESET << ::min(e, f) << std::endl;
	std::cout << GREEN "Max num: " RESET << ::max(e, f) << std::endl;
	e = 10;
	f = -5;
	std::cout << GREEN << "Before:  " RESET << "c = " << e << " d = " << f << std::endl;
	::swap(e, f);
	std::cout << GREEN << "After: " RESET << " c = " << e << " d = " << f << std::endl;
	std::cout << GREEN "Min num: " RESET << ::min(e, f) << std::endl;
	std::cout << GREEN "Max num: " RESET << ::max(e, f) << std::endl;

	std::cout << std::endl << BGRED "[ string test ]" RESET << std::endl;
	std::string hello = "hello";
	std::string bye = "bye";
	std::cout << GREEN "Min string: " RESET << ::min(hello, bye) << std::endl;
	std::cout << GREEN "Max string: " RESET << ::max(hello, bye) << std::endl;
	std::cout << GREEN << "Before:  " RESET << "hello = " << hello << " / bye = " << bye << std::endl;
	::swap(hello, bye);
	std::cout << GREEN << "After: " RESET << " hello = " << hello << " / bye = " << bye << std::endl;
	return 0;
}
