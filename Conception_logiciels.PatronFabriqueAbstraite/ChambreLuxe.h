#pragma once
#include "AbstractChambre.h"
class ChambreLuxe :
    public AbstractChambre
{
    void nettoyer() override;
    void decrireProduit() override;
    ~ChambreLuxe() override = default;
};

