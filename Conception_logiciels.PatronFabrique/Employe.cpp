#include "Employe.h"

#include <iostream>


Employe::Employe(std::string nom, std::string prenom) : nom(nom), prenom(prenom)
{
};

void Employe::afficherProfil()
{
	std::cout << role << " : " << prenom << " " << nom << std::endl;
}


