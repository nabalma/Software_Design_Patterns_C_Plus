#include "GenerateurEmploye.h"
#include "Employe.h"
#include <string>

ProfilAbstrait* GenerateurEmploye::creerUtilisateur(std::string nom, std::string prenom)
{
	return new Employe(nom, prenom);
};

