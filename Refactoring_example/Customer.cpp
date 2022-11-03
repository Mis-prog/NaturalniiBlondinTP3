#include "Customer.h"

string Customer::statement() {
	double totalAmount = 0;
	int frequentRenterPoints = 0;
	string result = "������ " + getName() + "\n";

	for (auto& each : _rentals) {
		double thisAmount =each.gerCharge();
		frequentRenterPoints+=bonus(each);

		// ����� ����������� ��� ������� �������
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(thisAmount) + "\n";
		totalAmount += thisAmount;
	}

	// ���������� �����������
	result += "����� �������������: " +
		to_string(totalAmount) + "\n";
	result += "�� ���������� " + to_string(frequentRenterPoints) +
		" �������� �����";
	return result;
}
int Customer::bonus(Rental& each)
{

	// ���������� �������� �����
	int result = 0;
	result++;

	// ����� �� ����������� ������ �������
	if ((each.getMovie().getPriceCode() == Movie::NEW_RELEASE) &&
		each.getDaysRented() > 1)
		result++;
	return result;
}

double Customer::amountFor(Rental aRental)
{
	
	return aRental.gerCharge();
}
