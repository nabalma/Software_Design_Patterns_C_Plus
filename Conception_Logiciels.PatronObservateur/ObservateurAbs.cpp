#include "ObservateurAbs.h"
#include "Ressource.h"

void ObservateurAbs::sabonner(Ressource* sujet)
{
    sujet->ajouter(this);
}

void ObservateurAbs::sedesabonner(Ressource* sujet)
{
    sujet->retirer(this);
}