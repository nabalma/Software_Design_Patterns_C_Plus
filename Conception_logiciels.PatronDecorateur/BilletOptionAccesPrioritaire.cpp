#include<iostream>
#include "BilletOptionAccesPrioritaire.h"


void BilletOptionAccesPrioritaire::setCout(double nouveauCout)
{
coutOptionAccesPrioritaire = nouveauCout;
};
double BilletOptionAccesPrioritaire::getCout()
{
	return coutOptionAccesPrioritaire;
};
void BilletOptionAccesPrioritaire::afficherCout()
{
	std::cout << "Prix du Billet : \n";
	std::cout << "\t - Base " << billetDeBase->getClassBaseName() << "                : " << billetDeBase->getCout() << " CAD. \n";
	std::cout << "\t - Option Acces Prioritaire          :  " << getCout() << " CAD. \n";
	std::cout << "\t - Total (Option Acces)              :  " << billetDeBase->getCout() + getCout() << " CAD. ";
};

std::string BilletOptionAccesPrioritaire::getClassBaseName()
{
	return billetDeBase->getClassBaseName();
};

BilletOptionAccesPrioritaire::BilletOptionAccesPrioritaire(BilletAbs* billet)
	: BilletOptionAbs(billet) {
}