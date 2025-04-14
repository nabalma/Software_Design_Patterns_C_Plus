#pragma once
#include "BilletAbs.h"
class BilletOptionAbs :
    public BilletAbs
{
protected:
	BilletAbs* billetDeBase;

public:
	BilletOptionAbs(BilletAbs* billet) : billetDeBase(billet) {}
	virtual void setCout(double nouveauCout) =0;
	virtual double getCout() =0;
	virtual void afficherCout() =0;

};

