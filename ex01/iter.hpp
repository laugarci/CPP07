

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
void	iter( T *arr, unsigned int n, void ( *f )( T& ) )
{
	if ( arr != NULL )
	{
		for ( unsigned int i = 0; i < n; i++ )
			f( arr[ i ] );
	}
}

#endif
