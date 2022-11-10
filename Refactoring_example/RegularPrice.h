#pragma once
#include "Price.h"
class RegularPrice :
    public Price
{
    // Inherited via Price
public:
    virtual int getPriceCode() override;
    virtual double getCharge(int daysRented);
};

