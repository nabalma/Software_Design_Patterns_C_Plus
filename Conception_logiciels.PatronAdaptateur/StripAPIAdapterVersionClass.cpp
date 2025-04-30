#include "StripAPIAdapterVersionClass.h"
#include<iostream>


void StripAPIAdapterVersionClass::payerMontant(double montant) 
{
	effectuerPaiement(montant, "CFA"); std::cout << "Et reconverti en Passerelle Paiement";
};