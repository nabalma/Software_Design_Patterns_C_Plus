#pragma once
#include "AbstractProduct.h"
class AbstractRestauration :
    public AbstractProduct
{
public:
    virtual void afficherMenu()=0;
};

