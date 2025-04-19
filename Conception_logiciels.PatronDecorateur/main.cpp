#include "BilletClassEco.h"
#include "BilletClassAffaire.h"

#include "BilletOptionBagages.h"
#include <iostream>
#include "BilletAbs.h"

#include "BilletOptionAccesPrioritaire.h"
#include "BilletOptionRepasPremium.h"




int main() {

	BilletAbs* billetDebase = new BilletClassAffaire();
	BilletAbs* billet = new BilletOptionAccesPrioritaire(billetDebase);
//	BilletAbs* billet = new BilletOptionBagages(billetOption);

//	billet.setCout(1670);

	billet->afficherCout();
	std::cout << std::endl;

}