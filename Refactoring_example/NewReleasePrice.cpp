#include "NewReleasePrice.h"
#include "Movie.h"

int NewReleasePrice::getPriceCode() {
	return Movie::NEW_RELEASE;
}
double NewReleasePrice::getCharge(int daysRented) {
	double result=0;
	result += daysRented * 3;
	return result;
}
 
int NewReleasePrice::bonus(int daysRented)
{

	// Начисление бонусных очков
	int result = Price::bonus(daysRented);

	// Бонус за двухдневный прокат новинки
	if (daysRented > 1)
		result++;
	return result;
}