#include "ChildrenPrice.h"
#include "Movie.h"]

int ChildrenPrice::getPriceCode() {
	return Movie::CHILDREN;
}
double ChildrenPrice::getCharge(int daysRented) {
	double result=0;
	result += 1.5;
	if (daysRented > 3)
		result += (daysRented - 3) * 1.5;
	return result;
}