#include "GenerateurAdmin.h"
#include "Administrateur.h"
#include <string>


ProfilAbstrait* GenerateurAdmin::creerUtilisateur(std::string nom, std::string prenom) 
{
	return new Administrateur(nom,prenom);
};
