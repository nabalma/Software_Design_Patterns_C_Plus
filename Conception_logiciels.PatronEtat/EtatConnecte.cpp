#include "EtatConnecte.h"
#include<iostream>
#include "EtatDeconnecte.h"

EtatAbstrait* EtatConnecte::etablirConnexion()
{
	std::cout << "[Erreur] Deja connecte."<<std::endl;
	return this;

};
EtatAbstrait* EtatConnecte::deconnecter()
{
	std::cout << "En Cours  de Deconnexion ! " << std::endl;
	return new EtatDeconnecte();

};

EtatAbstrait* EtatConnecte::connexionReussie()
{
	return this;
}
