#include "PlanificateurDeTournee.h"

void PlanificateurDeTournee::planifierTournee() {
    preparerLeChargement();
    brieferLeChauffeur();
    suivreLaCargaison(); 
    gererLesControlesFinaux();
}

void PlanificateurDeTournee::preparerLeChargement() {
    std::cout << "[Chargement] : Les colis sont prepares et verifies dans l'entrepot." << std::endl;
}

void PlanificateurDeTournee::brieferLeChauffeur() {
    std::cout << "[Briefing] : Le chauffeur est brieffe sur l'itineraire, les priorites et les risques potentiels." << std::endl;
}

void PlanificateurDeTournee::gererLesControlesFinaux() {
    std::cout << "[Controle final] : Les livraisons sont validees, les retours sont enregistres et le rapport est genere." << std::endl;
}

