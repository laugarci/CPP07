/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:53:14 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/19 15:10:15 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab[] = {0, 1, 2, 3, 4};
	std::string tab2[] = {"a", "b", "c"};
	std::string tab3[] = {"hola", "que", "tal"};
    ::iter(tab, 5, print);
	::iter(tab2, 3, print);
	::iter(tab3, 3, print);
}
