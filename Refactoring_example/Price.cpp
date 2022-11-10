#include "Price.h"
#include "Movie.h"

int Price::bonus(int daysRented)
{

	// Начисление бонусных очков
	int result = 0;
	result++;

	// Бонус за двухдневный прокат новинки
	if ((getPriceCode() == Movie::NEW_RELEASE) &&
		daysRented > 1)
		result++;
	return result;
}