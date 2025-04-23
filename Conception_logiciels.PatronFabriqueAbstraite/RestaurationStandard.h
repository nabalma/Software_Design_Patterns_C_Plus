#pragma once
#include "AbstractRestauration.h"
class RestaurationStandard :
    public AbstractRestauration
{
public:
    void afficherMenu() override;
    void decrireProduit() override;
};

