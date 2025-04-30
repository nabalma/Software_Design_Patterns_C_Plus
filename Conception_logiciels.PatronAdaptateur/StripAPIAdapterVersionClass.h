#pragma once
#include "StripeAPI.h"
#include "PasserellePaiement.h"


class StripAPIAdapterVersionClass : public StripeAPI,public PasserellePaiement
{
public:
	StripAPIAdapterVersionClass() = default;
	void payerMontant(double montant) override;	

};

