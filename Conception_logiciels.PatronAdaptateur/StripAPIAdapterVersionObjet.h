#pragma once
#include "StripeAPI.h"
#include "PasserellePaiement.h"


class StripAPIAdapterVersionObjet : public PasserellePaiement
{
private:
	StripeAPI stripeApi;
public:
	void payerMontant(double montant) override;

};

