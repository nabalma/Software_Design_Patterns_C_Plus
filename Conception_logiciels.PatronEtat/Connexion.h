#pragma once
#include "EtatAbstrait.h"
class Connexion
{
private:
	EtatAbstrait* etatCourant;
public:
	Connexion();          
	~Connexion();

	EtatAbstrait* etablirConnexion() ;
	EtatAbstrait* deconnecter() ;
	EtatAbstrait* connexionReussie() ;
};

