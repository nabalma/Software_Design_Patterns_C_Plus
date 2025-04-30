#pragma once
#include "StripeAPI.h"
#include "PasserellePaiement.h"



class StripAPIAdapterVersionClass : public StripeAPI,PasserellePaiement
{
public:
	void payerMontant(double montant) override;	

};

