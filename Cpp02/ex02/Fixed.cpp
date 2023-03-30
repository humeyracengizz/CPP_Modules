#include "Fixed.hpp"

Fixed::Fixed()
{
	fixnum = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int x)
{
	fixnum = x << num_bits;
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float c)
{
	cout << "Float constructor called" << endl;
	fixnum = (int)roundf(c * (1 << num_bits));
}

Fixed::~Fixed()
{
	cout << "Destructor called"<< endl;
}

Fixed::Fixed(const Fixed& cpy)
{
	cout << "Copy constructor called" << endl;
	fixnum = cpy.getRawBits();
} 

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (fixnum);
}

Fixed	&Fixed::operator=(const Fixed& opr)
{
	fixnum = opr.fixnum;
	cout << "Copy assigment operator called" << endl;
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	fixnum = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)fixnum / (1 << num_bits));
}

int Fixed::toInt(void) const
{
	return(fixnum >> num_bits);
}

bool Fixed::operator>(const Fixed &rhs) const{
    return this->fixnum > rhs.fixnum;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->fixnum < rhs.fixnum;
}

bool Fixed::operator>=(const Fixed &rhs) const{
    return this->fixnum >= rhs.fixnum;
}

bool Fixed::operator<=(const Fixed &rhs) const{
    return this->fixnum <= rhs.fixnum;
}

bool Fixed::operator==(const Fixed &rhs) const{
    return this->fixnum == rhs.fixnum;
}

bool Fixed::operator!=(const Fixed &rhs) const{
    return this->fixnum != rhs.fixnum;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed ret;

    ret.setRawBits(this->fixnum + rhs.fixnum);
    return ret;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed ret;

    ret.setRawBits(this->fixnum - rhs.fixnum);
    return ret;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    Fixed ret;

    ret.setRawBits(this->fixnum * rhs.fixnum >> num_bits);
    return ret;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    Fixed ret;

    ret.setRawBits((this->fixnum * (1 << num_bits)) / rhs.fixnum);
    return ret;
}

const Fixed&	Fixed::max( const Fixed &obj1, const Fixed &obj2 )
{
	if ( obj1 > obj2 )
		return ( obj1 );
	return ( obj2 );
}

Fixed	Fixed::max( Fixed& obj1, Fixed& obj2 )
{
	if ( obj1.fixnum > obj2.fixnum )
		return ( obj1 );
	return ( obj2 );
	
}

const Fixed&	Fixed::min( const Fixed &obj1, const Fixed &obj2 )
{
	if( obj1 < obj2 )
		return ( obj1 );
	return ( obj2 );
}

Fixed	Fixed::min( Fixed& obj1, Fixed& obj2 )
{
	if ( obj1.fixnum < obj2.fixnum )
		return ( obj1 );
	return ( obj2 );
	
}

Fixed&	Fixed::operator ++ (void)
{
	this->fixnum++;
	return (*this);
}

Fixed&	Fixed::operator -- (void)
{
	this->fixnum--;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed result = *this;

	this->fixnum++;
	return (result);
}

Fixed	Fixed::operator -- (int)
{
	Fixed result = *this;

	this->fixnum--;
	return (result);
}

ostream	&operator<<(ostream &o, const Fixed &fixed) {
    o << fixed.toFloat();
    return o;
}
