#include "Rental.h"

double Rental ::gerCharge()
{
	return _movie.getCharge(_daysRented);
}
int Rental::bonus()
{

	// Начисление бонусных очков
	int result = 0;
	result++;

	// Бонус за двухдневный прокат новинки
	if ((this->getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		this->getDaysRented() > 1)
		result++;
	return result;
}
