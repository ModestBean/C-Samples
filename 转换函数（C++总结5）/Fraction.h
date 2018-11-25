#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
public:
	Fraction(int num, int den = 1) :m_numerator(num), m_denominator(den) {}
	operator double() const {
		return (double)m_numerator / m_denominator;
	}
private:
	int m_numerator;//����
	int m_denominator;//��ĸ
};
#endif // DEBUG

