#pragma once
#include "GenerateurProfilAbstrait.h"
class GenerateurEmploye :
    public GenerateurProfilAbstrait
{
public:

	ProfilAbstrait* creerUtilisateur(std::string nom, std::string prenom) override;
	virtual ~GenerateurEmploye() = default;
};

