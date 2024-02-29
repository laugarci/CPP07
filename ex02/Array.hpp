/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:52:56 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/29 14:01:12 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T	*_arr;
		unsigned int _size;
    public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& other);
		~Array(void);
		Array&		operator=(const Array& other);
		unsigned int	size(void) const;
		T&	operator[]( unsigned int n );
		const T&	operator[]( const unsigned int n ) const;
};

template <typename T> Array<T>::Array(void)
{
	this->_size = 0;
	this->_arr = NULL;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_arr = new T[this->_size];
}

template <typename T>Array<T>::~Array( void )
{
	if (this->_size != 0)
		delete[] this->_arr;
}

template <typename T> Array<T>::Array(const Array< T >& arr)
{
	this->_size = arr._size;
	this->_arr = new T[this->_size];
	if (this->_size != 0)
	{
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = arr._arr[i];
	}
}

template <typename T> unsigned int	Array< T >::size(void) const
{
	return (this->_size);
}

template <typename T> Array<T>&	Array<T>::operator=(const Array< T >& arr)
{
	this->_size = arr._size;
	if (this->_size != 0)
		delete [] this->_arr;
	this->_arr = new T[ this->_size ];
	if (this->_size != 0)
	{
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = arr._arr[i];
	}
	return (*this);
}

template <typename T>const T& Array<T>::operator[](const unsigned int n) const
{
	if (this->_arr == NULL)
		throw std::out_of_range("Error: empty array");
	if (n >= this->_size)
		throw std::out_of_range("Error: index out of range");
	return (this->_arr[n]);
}

template <typename T>T& Array<T>::operator[](unsigned int n)
{
	if (this->_arr == NULL)
		throw std::out_of_range("Error: empty array");
	if (n >= this->_size)
		throw std::out_of_range("Error: index out of range");
	return (this->_arr[n]);
}

#endif
