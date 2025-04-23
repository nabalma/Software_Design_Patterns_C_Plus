#pragma once
#include "AbstractProduct.h"
class AbstractAcceuilClient :
    public AbstractProduct
{
public:
    virtual void guiderClient()=0;
};

