#pragma once
#include "PlanificateurDeTournee.h"

class TourneePharmaceutique : public PlanificateurDeTournee {
public:
    void suivreLaCargaison() override;
};
