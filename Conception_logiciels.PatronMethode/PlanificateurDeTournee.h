#pragma once
#include <iostream>

class PlanificateurDeTournee {
public:
    // M�thode principale (template)
    void planifierTournee();

    // M�thodes de la proc�dure (certaines red�finissables)
    void preparerLeChargement();
    void brieferLeChauffeur();
    virtual void suivreLaCargaison() = 0;
    void gererLesControlesFinaux();

    virtual ~PlanificateurDeTournee() = default;
};