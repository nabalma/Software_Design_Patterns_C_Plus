#pragma once
#include <iostream>

class PlanificateurDeTournee {
public:
    // Méthode principale (template)
    void planifierTournee();

    // Méthodes de la procédure (certaines redéfinissables)
    void preparerLeChargement();
    void brieferLeChauffeur();
    virtual void suivreLaCargaison() = 0;
    void gererLesControlesFinaux();

    virtual ~PlanificateurDeTournee() = default;
};