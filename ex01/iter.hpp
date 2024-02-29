/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:53:09 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/29 12:03:41 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"

#include <iostream>

template <typename T> void iter(T *arr, unsigned int n, void (*f)(T&))
{
	if (arr != NULL)
	{
		for (unsigned int i = 0; i < n; i++)
			f(arr[i]);
	}
}

template <typename T> void print(T &x)
{
    std::cout << x << std::endl;
}

#endif
