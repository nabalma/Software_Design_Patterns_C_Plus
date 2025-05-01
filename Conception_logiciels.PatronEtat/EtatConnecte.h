#pragma once
#include "EtatAbstrait.h"
class EtatConnecte :
    public EtatAbstrait
{
public:
    EtatAbstrait* etablirConnexion() override;
    EtatAbstrait* deconnecter() override;
    EtatAbstrait* connexionReussie() override;
};

