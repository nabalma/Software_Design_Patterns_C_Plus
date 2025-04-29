#include "DepotDocumentConcret.h"
#include "IterateurDepotDocument.h"

int DepotDocumentConcret::getNombreDocuments() const {
    return documents.size();  // ou autre selon ton stockage
}

Document DepotDocumentConcret::getDocument(int index) const {
    return documents.at(index);  // ou documents[index] selon ta structure
}

void DepotDocumentConcret::ajouterDocument(const Document& doc) {
    documents.push_back(doc);
}

IterateurAbstrait<Document>* DepotDocumentConcret::creerIterateur() const {
    return new IterateurDepotDocument(this);
}
