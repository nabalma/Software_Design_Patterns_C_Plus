#include "StripeAPI.h"
#include <iostream>

void StripeAPI::effectuerPaiement(double montant, std::string devise) {
    std::cout << "[Stripe] Paiement de " << montant << " " << devise << " effectué." << std::endl;
}
