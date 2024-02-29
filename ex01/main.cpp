/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:53:14 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/29 12:05:10 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << BGRED "[ INT TEST ]" RESET << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
	::iter(tab, 5, print);
	std::cout << BGRED "[ STRING1 TEST ]" RESET << std::endl;
	std::string tab2[] = {"a", "b", "c"};
	::iter(tab2, 3, print);
	std::cout << BGRED "[ STRING2 TEST ]" RESET << std::endl;
	std::string tab3[] = {"hola", "que", "tal"};
	::iter(tab3, 3, print);
}
