#pragma once
#include "BilletAbs.h"



class BilletClassAffaire :
    public BilletAbs
{
private:
	double coutBaseAffaire = 2000;

public:
	void setCout(double nouveauCout) override;
	double getCout() override;
	void afficherCout() override;
	std::string getClassBaseName() override;
};

