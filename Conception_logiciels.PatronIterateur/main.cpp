#include "DepotDocumentConcret.h"
#include "IterateurDepotDocument.h"
#include "Document.h"
#include <iostream>

int main() {
    // Cr�ation du d�p�t
    DepotDocumentConcret depot;

    // Ajout de documents
    depot.ajouterDocument(Document("Contrat A", "Contrat", 120));
    depot.ajouterDocument(Document("Rapport 2024", "Rapport", 540));
    depot.ajouterDocument(Document("Note RH", "Note", 80));

    // Cr�ation de l'it�rateur
    IterateurAbstrait<Document>* iterateur = depot.creerIterateur();

    // Parcours des documents
    for (iterateur->Premier(); !iterateur->testFin(); iterateur->Suivant()) {
        iterateur->getCourant().afficher();
    }

    // Lib�ration de la m�moire (si l'it�rateur est allou� dynamiquement)
    delete iterateur;

    return 0;
}
