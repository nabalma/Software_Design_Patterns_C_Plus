#include "IterateurDepotDocument.h"
#include "DepotDocumentConcret.h"

// Positionne l'it�rateur au d�but
void IterateurDepotDocument::Premier() {
    indexCourant = 0;
}

// Passe � l'�l�ment suivant
void IterateurDepotDocument::Suivant() {
    ++indexCourant;
}

// V�rifie si on a d�pass� la fin
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
