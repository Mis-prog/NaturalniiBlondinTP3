#pragma once
#include "Price.h"
class ChildrenPrice :
    public Price
{
public:
    virtual int getPriceCode() override;
};

