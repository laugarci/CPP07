
#include "whatever.hpp"

int main()
{
	int x = 1;
	int y = 2;
	
	std::cout << "Before: " << std::endl << "x = " << x << std::endl << "y = " << y << std::endl;
	swap(x, y);
	std::cout << "After: " << std::endl << "x = " << x << std::endl << "y = " << y << std::endl;
	
	int ret = min(x, y);
	std::cout << "Min num: " << ret << std::endl;
	ret = max(x, y);
	std::cout << "Max num: " << ret << std::endl;
}
