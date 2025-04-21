#pragma once
#include "GenerateurProfilAbstrait.h"
class GenerateurClient :
    public GenerateurProfilAbstrait
{
public:

	ProfilAbstrait* creerUtilisateur(std::string nom, std::string prenom) override;
	virtual ~GenerateurClient() = default;
};

