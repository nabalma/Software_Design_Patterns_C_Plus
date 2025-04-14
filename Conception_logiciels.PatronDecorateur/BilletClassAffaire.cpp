#include "BilletClassAffaire.h"
#include <iostream>


void BilletClassAffaire::setCout(double nouveauCout)
{
	if (nouveauCout > 0) {
		coutBaseAffaire = nouveauCout;
	}
};

double BilletClassAffaire::getCout()
{
	return coutBaseAffaire;
};


void BilletClassAffaire::afficherCout() {
	std::cout << "Prix du Billet : \n";
	std::cout << "\t - Base (Class Affaire) : " << getCout() << " CAD. ";
}


std::string BilletClassAffaire::getClassBaseName() 
{
	return "Class Affaire";
};
