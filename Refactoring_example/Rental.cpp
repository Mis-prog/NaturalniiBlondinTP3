#include "Rental.h"

double Rental ::gerCharge()
{
	return _movie.getCharge(_daysRented);
}
int Rental::bonus()
{

	// ���������� �������� �����
	int result = 0;
	result++;

	// ����� �� ����������� ������ �������
	if ((this->getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		this->getDaysRented() > 1)
		result++;
	return result;
}
