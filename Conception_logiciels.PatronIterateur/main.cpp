#include "DepotDocumentConcret.h"
#include "IterateurDepotDocument.h"
#include "Document.h"
#include <iostream>

int main() {
    // Création du dépôt
    DepotDocumentConcret depot;

    // Ajout de documents
    depot.ajouterDocument(Document("Contrat A", "Contrat", 120));
    depot.ajouterDocument(Document("Rapport 2024", "Rapport", 540));
    depot.ajouterDocument(Document("Note RH", "Note", 80));

    // Création de l'itérateur
    IterateurAbstrait<Document>* iterateur = depot.creerIterateur();

    // Parcours des documents
    for (iterateur->Premier(); !iterateur->testFin(); iterateur->Suivant()) {
        iterateur->getCourant().afficher();
    }

    // Libération de la mémoire (si l'itérateur est alloué dynamiquement)
    delete iterateur;

    return 0;
}
