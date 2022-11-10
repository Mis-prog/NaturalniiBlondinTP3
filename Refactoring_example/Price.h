#pragma once
class Price
{
public:
	virtual int getPriceCode() = 0;
	//double getCharge(int daysRented);
	virtual double getCharge(int daysRented)=0;
	virtual int bonus(int daysRented);
};

