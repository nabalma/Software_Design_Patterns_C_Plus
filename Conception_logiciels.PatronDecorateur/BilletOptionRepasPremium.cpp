#include "BilletOptionRepasPremium.h"
#include<iostream>


void BilletOptionRepasPremium::setCout(double nouveauCout)
{
	coutOptionRepasPremium = nouveauCout;
};
double BilletOptionRepasPremium::getCout()
{
	return coutOptionRepasPremium;
};
void BilletOptionRepasPremium::afficherCout()
{
	std::cout << "Prix du Billet : \n";
	std::cout << "\t - Base " << billetDeBase->getClassBaseName() << "                 : " << billetDeBase->getCout() << " CAD. \n";
	std::cout << "\t - Option Repas Premium           :  " << getCout() << " CAD. \n";
	std::cout << "\t - Total (Option Repas)           :  " << billetDeBase->getCout() + getCout() << " CAD. ";
};

std::string BilletOptionRepasPremium::getClassBaseName()
{
	return billetDeBase->getClassBaseName();
};

BilletOptionRepasPremium::BilletOptionRepasPremium(BilletAbs* billet)
	: BilletOptionAbs(billet) {
}
