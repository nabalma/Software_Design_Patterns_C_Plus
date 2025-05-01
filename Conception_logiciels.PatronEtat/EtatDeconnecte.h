#pragma once
#include "EtatAbstrait.h"
class EtatDeconnecte :
    public EtatAbstrait
{
public:
    EtatAbstrait* etablirConnexion() override;
    EtatAbstrait* deconnecter() override;
    EtatAbstrait* connexionReussie() override;
};

