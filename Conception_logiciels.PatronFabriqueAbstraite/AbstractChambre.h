#pragma once
#include "AbstractProduct.h"
class AbstractChambre :
    public AbstractProduct
{
public:
    virtual void nettoyer()=0; 
    ~AbstractChambre() override = default;
};

