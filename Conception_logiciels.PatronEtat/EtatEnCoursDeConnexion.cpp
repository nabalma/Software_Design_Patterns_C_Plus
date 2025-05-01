#include "EtatEnCoursDeConnexion.h"
#include "EtatConnecte.h"

#include<iostream>


EtatAbstrait* EtatEnCoursDeConnexion::etablirConnexion()
{
	std::cout << "[Erreur] Connexion deja en cours. Veuillez patienter." << std::endl;
	return this;

};
EtatAbstrait* EtatEnCoursDeConnexion::deconnecter()
{
	std::cout << "[Erreur] Connexion deja en cours. Veuillez patienter." << std::endl;
	return this;

};

EtatAbstrait* EtatEnCoursDeConnexion::connexionReussie()
{
	std::cout << "Connexion reussie. " << std::endl;
	return new EtatConnecte();
}
