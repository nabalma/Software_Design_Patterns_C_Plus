#pragma once
#include "GenerateurProfilAbstrait.h"
class GenerateurAdmin :
    public GenerateurProfilAbstrait
{
public:
	
	 ProfilAbstrait* creerUtilisateur(std::string nom, std::string prenom) override;
	 virtual ~GenerateurAdmin() = default;
};

