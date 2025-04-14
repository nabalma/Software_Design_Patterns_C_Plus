#pragma once
#include "BilletOptionAbs.h"
class BilletOptionAccesPrioritaire :
    public BilletOptionAbs
{;
private:
	double coutOptionAccesPrioritaire = 30;

public:
	BilletOptionAccesPrioritaire(BilletAbs* billet);
	void setCout(double nouveauCout) override;
	double getCout() override;
	void afficherCout() override;
	std::string getClassBaseName() override;
};

