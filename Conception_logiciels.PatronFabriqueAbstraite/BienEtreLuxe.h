#pragma once
#include "AbstractBienEtre.h"
class BienEtreLuxe :
    public AbstractBienEtre
{
public:
    void reserverSpa() override;
    void decrireProduit() override;
};

