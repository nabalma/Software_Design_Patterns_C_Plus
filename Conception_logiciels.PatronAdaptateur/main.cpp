#include <iostream>
#include "StripAPIAdapterVersionClass.h"
#include "StripAPIAdapterVersionObjet.h"

int main() {
    std::cout << "=== Test Adaptateur Version CLASSE ===" << std::endl;
    PasserellePaiement* adaptateurClasse = new StripAPIAdapterVersionClass();
    adaptateurClasse->payerMontant(1500.0);

    std::cout << "\n=== Test Adaptateur Version OBJET ===" << std::endl;
    PasserellePaiement* adaptateurObjet = new StripAPIAdapterVersionObjet();
    adaptateurObjet->payerMontant(2450.0);

    // Nettoyage
    delete adaptateurClasse;
    delete adaptateurObjet;

    return 0;
}
