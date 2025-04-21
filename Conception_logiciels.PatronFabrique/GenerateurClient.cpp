#include "GenerateurClient.h"
#include "Client.h"
#include <string>

ProfilAbstrait* GenerateurClient::creerUtilisateur(std::string nom, std::string prenom)
{
	return new Client(nom, prenom);
};
