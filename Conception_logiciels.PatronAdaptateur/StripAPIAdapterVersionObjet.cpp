#include "StripAPIAdapterVersionObjet.h"
#include <iostream>

void StripAPIAdapterVersionObjet::payerMontant(double montant) 
{ 
	stripeApi.effectuerPaiement(montant,"CFA"); std::cout << "Augmentee de son adapation Passerelle Paiement";
};
