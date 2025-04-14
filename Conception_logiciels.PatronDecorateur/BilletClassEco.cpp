#include "BilletClassEco.h"
#include <iostream>


void BilletClassEco::setCout(double nouveauCout)
{
	if (nouveauCout > 0) {
		coutBaseEco = nouveauCout;
	}
};

double BilletClassEco::getCout()
{
	return coutBaseEco;
};


void BilletClassEco::afficherCout() {
	std::cout << "Prix du Billet : \n";
	std::cout << "\t - Base (Class Eco) : " << getCout() << " CAD. ";
}

std::string BilletClassEco::getClassBaseName()
{
	return "Class Eco";
};