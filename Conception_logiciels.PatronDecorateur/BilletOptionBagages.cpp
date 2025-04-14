#include<iostream>
#include "BilletOptionBagages.h"




void BilletOptionBagages::setCout(double nouveauCout) 
{
	coutOptionBagages = nouveauCout;
}  ;
double BilletOptionBagages::getCout() 
{
	return coutOptionBagages;
};
void BilletOptionBagages::afficherCout() 
{
	std::cout << "Prix du Billet : \n";
	std::cout << "\t - Base   " << billetDeBase->getClassBaseName() << "             : " << billetDeBase->getCout() << " CAD. \n";
	std::cout << "\t - Option Bagages               : " << getCout() << " CAD. \n";
	std::cout << "\t - Total (Option Bagages)       : " << billetDeBase->getCout()+getCout() << " CAD. ";
};

std::string BilletOptionBagages::getClassBaseName() 
{
	return billetDeBase->getClassBaseName();
};

BilletOptionBagages::BilletOptionBagages(BilletAbs* billet)
	: BilletOptionAbs(billet) {
}