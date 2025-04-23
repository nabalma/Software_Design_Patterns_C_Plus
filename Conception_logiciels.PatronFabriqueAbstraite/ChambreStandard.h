#pragma once
#include "AbstractChambre.h"
class ChambreStandard :
    public AbstractChambre
{
public:
    void nettoyer() override;
    void decrireProduit() override;
     ~ChambreStandard() override = default;
};

