#include <iostream>
#include <string>
#include <math.h>

using std::cout;
using std::string;
using std::endl;
using std::ostream;

class Fixed
{
	private:
		int					fixnum;
		static const int	num_bits = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float c);
		Fixed(const Fixed& cpy);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		bool	operator == (const Fixed& opr) const;
		bool	operator != (const Fixed& opr) const;
		bool	operator < (const Fixed& opr)const;
		bool	operator > (const Fixed& rhs)const;
		bool	operator >= (const Fixed& opr)const;
		bool	operator <= (const Fixed& opr)const;

		Fixed	&operator = (const Fixed& opr);
		Fixed	operator + (Fixed const &opr)const;
		Fixed	operator / (Fixed const &opr)const;
		Fixed	operator * (Fixed const &opr)const;
		Fixed	operator - (Fixed const &opr)const;

		Fixed&	operator ++ (void);
		Fixed&	operator -- (void); 
		Fixed	operator ++ (int); 
		Fixed	operator -- (int);

		static Fixed			max( Fixed& obj1, Fixed& obj2 );
		static const Fixed&		max( const Fixed &obj1, const Fixed &obj2 );

		static Fixed			min( Fixed& obj1, Fixed& obj2 );
		static const Fixed&		min( const Fixed &obj1, const Fixed &obj2 );
};

ostream& operator<<(ostream &obj, const Fixed& fix);
