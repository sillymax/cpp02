#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int fixedPoint;
	static const int fractionBits;
};

#endif