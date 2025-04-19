#pragma once
#include "PlanificateurDeTournee.h"

class TourneeAlimentaire : public PlanificateurDeTournee {
public:
    void suivreLaCargaison() override;
};