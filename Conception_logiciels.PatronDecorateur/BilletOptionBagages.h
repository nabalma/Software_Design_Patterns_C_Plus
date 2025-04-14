#pragma once
#include "BilletOptionAbs.h"
class BilletOptionBagages :
    public BilletOptionAbs
{
private:
	double coutOptionBagages=25;

public:
	BilletOptionBagages(BilletAbs* billet);
	void setCout(double nouveauCout) override;
	double getCout() override;
	void afficherCout() override;
	std::string getClassBaseName() override;
};

