#include "Customer.h"

string Customer::statement() {
	string result = "Прокат " + getName() + "\n";

	for (auto& each : _rentals) {
		// Вывод результатов для каждого проката
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(each.gerCharge()) + "\n";
		
	}

	// Добавление колонтитула
	result += "Сумма задолженности: " +
		to_string(getTotalCharge()) + "\n";
	result += "Вы заработали " + to_string(getTotalBonus()) +
		" бонусных очков";
	return result;
}
int Customer::bonus(Rental& each)
{

	return each.bonus();
}

double Customer::amountFor(Rental aRental)
{
	
	return aRental.gerCharge();
}

double Customer::getTotalCharge() {
	double totalAmount = 0;
	for (auto& each : _rentals) {
		double thisAmount = each.gerCharge();
		totalAmount += thisAmount;
	}
	return totalAmount;
}
int Customer::getTotalBonus() {
	int frequentRenterPoints = 0;
	for (auto& each : _rentals) {
		frequentRenterPoints += each.bonus();
	}
	return frequentRenterPoints;
}