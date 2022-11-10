#include "Rental.h"

double Rental ::gerCharge()
{
	return _movie.getCharge(_daysRented);
}
int Rental::bonus()
{
	return this->getMovie().bonus(_daysRented);
}
