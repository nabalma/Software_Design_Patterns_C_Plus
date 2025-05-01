#include "Connexion.h"
#include "EtatDeconnecte.h"

Connexion::Connexion() {
    etatCourant = new EtatDeconnecte();
}

Connexion::~Connexion() {
    delete etatCourant;
}


EtatAbstrait* Connexion::etablirConnexion() 
{
    EtatAbstrait* nouvelEtat = etatCourant->etablirConnexion();
    if (nouvelEtat != etatCourant) {
        delete etatCourant;
        etatCourant = nouvelEtat;
        return nouvelEtat;
    }
};
EtatAbstrait* Connexion::deconnecter() 
{
    EtatAbstrait* nouvelEtat = etatCourant->deconnecter();
    if (nouvelEtat != etatCourant) {
        delete etatCourant;
        etatCourant = nouvelEtat;
        return nouvelEtat;
    }
};

EtatAbstrait* Connexion::connexionReussie() 
{
    EtatAbstrait* nouvelEtat = etatCourant->connexionReussie();
    if (nouvelEtat != etatCourant) {
        delete etatCourant;
        etatCourant = nouvelEtat;
        return nouvelEtat;
    }

};
