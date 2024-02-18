/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:07:14 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/18 20:07:20 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>void swap(T& x, T& y)
{
	T temp = x;
	
	x = y;
	y = temp;
}

template<class T>T min(T& x, T& y)
{
	return (x > y ? y : x);
}

template<class T>T max(T& x, T& y)
{
	return (x > y ? x : y);
}

#endif
