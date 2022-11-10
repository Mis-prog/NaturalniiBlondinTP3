#include "Customer.h"

string Customer::statement() {
	string result = "������ " + getName() + "\n";

	for (auto& each : _rentals) {
		// ����� ����������� ��� ������� �������
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(each.gerCharge()) + "\n";
		
	}

	// ���������� �����������
	result += "����� �������������: " +
		to_string(getTotalCharge()) + "\n";
	result += "�� ���������� " + to_string(getTotalBonus()) +
		" �������� �����";
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