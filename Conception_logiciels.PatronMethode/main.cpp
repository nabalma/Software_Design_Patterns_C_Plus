#include <iostream>
#include "TourneeAlimentaire.h"
#include "TourneePharmaceutique.h"
#include "TourneeIndustrielle.h"

int main() {
    std::cout << "=== Tournee Alimentaire ===" << std::endl;
    PlanificateurDeTournee* tournee1 = new TourneeAlimentaire();
    tournee1->planifierTournee();
    delete tournee1; // Libération mémoire

    std::cout << "\n=== Tournee Pharmaceutique ===" << std::endl;
    PlanificateurDeTournee* tournee2 = new TourneePharmaceutique();
    tournee2->planifierTournee();
    delete tournee2; // Libération mémoire

    std::cout << "\n=== Tournee Industrielle ===" << std::endl;
    PlanificateurDeTournee* tournee3 = new TourneeIndustrielle();
    tournee3->planifierTournee();
    delete tournee3; // Libération mémoire

    return 0;
}