#include "Price.h"
#include "Movie.h"

int Price::bonus(int daysRented)
{

	// ���������� �������� �����
	int result = 0;
	result++;

	// ����� �� ����������� ������ �������
	if ((getPriceCode() == Movie::NEW_RELEASE) &&
		daysRented > 1)
		result++;
	return result;
}