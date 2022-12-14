#pragma once
#include "Price.h"
class NewReleasePrice :
    public Price
{
public:
    virtual int getPriceCode() override;
    virtual double getCharge(int daysRented);
    virtual int bonus(int daysRented);
};

