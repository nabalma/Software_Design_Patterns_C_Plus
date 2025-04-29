#pragma once
#include "IterateurAbstrait.h"
#include "Document.h"
#include "DepotDocumentConcret.h" // ou d�claration anticip�e


class IterateurDepotDocument :
    public IterateurAbstrait<Document>
{
public:
    DepotDocumentConcret* depot; // lien avec le d�p�t
    int indexCourant; // position actuelle dans la collection
};

