#pragma once
#include "BilletAbs.h"
class BilletClassEco :
    public BilletAbs
{
private:
	double coutBaseEco=1750;

public:
	void setCout(double nouveauCout) override;
	double getCout() override ;
	void afficherCout() override ;
	std::string getClassBaseName() override;
};

