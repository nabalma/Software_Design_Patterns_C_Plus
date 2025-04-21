#pragma once
#include "ProfilAbstrait.h"
#include <string>

class GenerateurProfilAbstrait
{
public:
	
	virtual ProfilAbstrait* creerUtilisateur(std::string nom, std::string prenom)=0;
	virtual ~GenerateurProfilAbstrait() = default;
};

