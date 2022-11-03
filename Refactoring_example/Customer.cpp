#include "Customer.h"

string Customer::statement() {
	double totalAmount = 0;
	int frequentRenterPoints = 0;
	string result = "Прокат " + getName() + "\n";

	for (auto& each : _rentals) {
		double thisAmount =each.gerCharge();
		frequentRenterPoints+=bonus(each);

		// Вывод результатов для каждого проката
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(thisAmount) + "\n";
		totalAmount += thisAmount;
	}

	// Добавление колонтитула
	result += "Сумма задолженности: " +
		to_string(totalAmount) + "\n";
	result += "Вы заработали " + to_string(frequentRenterPoints) +
		" бонусных очков";
	return result;
}
int Customer::bonus(Rental& each)
{

	// Начисление бонусных очков
	int result = 0;
	result++;

	// Бонус за двухдневный прокат новинки
	if ((each.getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		each.getDaysRented() > 1)
		result++;
	return result;
}

double Customer::amountFor(Rental aRental)
{
	
	return aRental.gerCharge();
}
