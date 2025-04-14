#include "BilletAbs.h"
#include <iostream>

void BilletAbs::setCout(double nouveauCout) 
{
	if (nouveauCout > 0) {
		cout = nouveauCout;
	}
};

double BilletAbs::getCout() 
{
	return cout;
};

void BilletAbs::afficherCout() {
	std::cout << "Prix du Billet : \n";
		std::cout<<"\t - Base : "<< getCout() << " CAD. ";
}