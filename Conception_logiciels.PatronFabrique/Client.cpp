#include "Client.h"
#include <iostream>


Client::Client(std::string nom, std::string prenom) : nom(nom), prenom(prenom)
{
};

void Client::afficherProfil()
{
	std::cout << role << " : " << prenom << " " << nom << std::endl;
}

