#pragma once
#include "IterateurAbstrait.h"
#include "Document.h"
#include "DepotDocumentConcret.h" // ou déclaration anticipée


class IterateurDepotDocument :
    public IterateurAbstrait<Document>
{
public:
    DepotDocumentConcret* depot; // lien avec le dépôt
    int indexCourant; // position actuelle dans la collection
};

