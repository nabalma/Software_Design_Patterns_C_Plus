#include <iostream>
#include "Ressource.h"
#include "ApproDepartement.h"
#include "EntrepotDepartement.h"
#include "PlanifDepartement.h"

int main() {
    // Création de la ressource surveillée
    Ressource ressource;

    // Configuration initiale du stock
    ressource.setStock(50);  // stock initial
   
    std::cout << "Stock actuel : " << ressource.getStock() << std::endl;

    // Création d’un observateur
    ApproDepartement appro;
    EntrepotDepartement entrepot;
    PlanifDepartement planif;

    // S’abonner à la ressource
    appro.sabonner(&ressource);
    entrepot.sabonner(&ressource);
    planif.sabonner(&ressource);

      std::cout << std::endl;

    std::cout << "\n--- Simulation : baisse progressive du stock ---" << std::endl;

    // Diminution du stock
    ressource.setStock(30);  // au-dessus du seuil → pas de notification
    ressource.setStock(18);  // sous le seuil → déclenche notification
   
    ressource.setStock(45);  // sous le seuil → déclenche notification

    // Désabonnement
   appro.sedesabonner(&ressource);
   entrepot.sedesabonner(&ressource);
   planif.sedesabonner(&ressource);
    std::cout<<std::endl;

    // Nouvelle baisse, mais aucun observateur abonné
    ressource.setStock(15);
   

    return 0;
}