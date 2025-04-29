#pragma once
#include "DepotDocumentAbstrait.h"
#include "Document.h"
#include <vector>

class DepotDocumentConcret :
    public DepotDocumentAbstrait<Document>
{

private:
    std::vector<Document> documents;

public:
    IterateurAbstrait<Document>* creerIterateur() const override;
    int getNombreDocuments() const;
    Document getDocument(int index) const;
    void ajouterDocument(const Document& doc);
};

