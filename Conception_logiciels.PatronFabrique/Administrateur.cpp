#include "Administrateur.h"
#include <iostream>


Administrateur::Administrateur(std::string nom, std::string prenom) : nom(nom), prenom(prenom)
{	
};

void Administrateur::afficherProfil() 
{
	std::cout << role << " : " << prenom << " " << nom << std::endl;
}
