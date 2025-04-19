#pragma once
#include "PlanificateurDeTournee.h"

class TourneeIndustrielle : public PlanificateurDeTournee {
public:
    void suivreLaCargaison() override;
};