#pragma once
#include<string>

class StripeAPI
{
public:
	void effectuerPaiement(double montant, std::string devise);
};

