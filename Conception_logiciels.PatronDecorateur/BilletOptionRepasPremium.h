#pragma once
#include "BilletOptionAbs.h"
class BilletOptionRepasPremium :
    public BilletOptionAbs
{
	;
private:
	double coutOptionRepasPremium = 30;

public:
	BilletOptionRepasPremium(BilletAbs* billet);
	void setCout(double nouveauCout) override;
	double getCout() override;
	void afficherCout() override;
	std::string getClassBaseName() override;
};
