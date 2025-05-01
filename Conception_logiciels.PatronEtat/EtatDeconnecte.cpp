#include "EtatDeconnecte.h"
#include "EtatEnCoursDeConnexion.h"

#include<iostream>


EtatAbstrait* EtatDeconnecte::etablirConnexion()
{
	std::cout << "En Cours de Connexion ! " << std::endl;
	return new EtatEnCoursDeConnexion();

};
EtatAbstrait* EtatDeconnecte::deconnecter()
{
	std::cout << "[Erreur] Aucune connexion active à fermer." << std::endl;
	return this;

};

EtatAbstrait* EtatDeconnecte::connexionReussie()
{
	return this;
}

