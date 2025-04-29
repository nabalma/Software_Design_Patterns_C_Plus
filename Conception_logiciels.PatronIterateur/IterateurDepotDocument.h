#pragma once
#include "IterateurAbstrait.h"
#include "Document.h"
#include "DepotDocumentConcret.h"



class IterateurDepotDocument :
    public IterateurAbstrait<Document>
{
private:
    const DepotDocumentConcret* depot;
    int indexCourant;

public:
    IterateurDepotDocument(const DepotDocumentConcret* depot);
    void Premier() override;
    void Suivant() override;
    bool testFin() const override;
    Document getCourant() const override;

};

