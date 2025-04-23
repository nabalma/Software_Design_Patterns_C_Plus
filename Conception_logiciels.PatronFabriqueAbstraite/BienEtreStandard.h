#pragma once
#include "AbstractBienEtre.h"
class BienEtreStandard :
    public AbstractBienEtre
{
public:
    void reserverSpa() override;
    void decrireProduit() override;
};

