


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>void swap(T& x, T& y)
{
	T temp = x;
	
	x = y;
	y = temp;
}

#endif
