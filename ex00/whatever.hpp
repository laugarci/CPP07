


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>void swap(T& x, T& y)
{
	T temp = x;
	
	x = y;
	y = temp;
}

template<class T>int min(T& x, T& y)
{
	return (x > y ? y : x);
}

template<class T>int max(T& x, T& y)
{
	return (x > y ? x : y);
}

#endif
