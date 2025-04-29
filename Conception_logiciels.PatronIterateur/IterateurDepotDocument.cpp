#include "IterateurDepotDocument.h"
#include "DepotDocumentConcret.h"

// Positionne l'itérateur au début
void IterateurDepotDocument::Premier() {
    indexCourant = 0;
}

// Passe à l'élément suivant
void IterateurDepotDocument::Suivant() {
    ++indexCourant;
}

// Vérifie si on a dépassé la fin
bool IterateurDepotDocument::testFin() const {
    return indexCourant >= depot->getNombreDocuments();
}

// Renvoie le document actuel
Document IterateurDepotDocument::getCourant() const {
    return depot->getDocument(indexCourant);
}

IterateurDepotDocument::IterateurDepotDocument(const DepotDocumentConcret* depot)
    : depot(depot), indexCourant(0) {
}
