
#include "whatever.hpp"

int main()
{
	int x = 1;
	int y = 2;
	
	std::cout << "Antes: " << std::endl << "x = " << x << std::endl << "y = " << y << std::endl;
	swap(x, y);
	std::cout << "Despues: " << std::endl << "x = " << x << std::endl << "y = " << y << std::endl;
}
