#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::cout;
	std::cout << b.getRawBits() << std::cout;
	std::cout << c.getRawBits() << std::cout;
}