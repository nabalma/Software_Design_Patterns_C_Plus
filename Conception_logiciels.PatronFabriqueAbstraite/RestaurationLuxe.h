#pragma once
#include "AbstractRestauration.h"
class RestaurationLuxe :
    public AbstractRestauration

{
public:
    void afficherMenu() override;
    void decrireProduit() override;
};

