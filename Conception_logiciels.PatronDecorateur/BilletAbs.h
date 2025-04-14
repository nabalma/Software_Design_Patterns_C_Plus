#pragma once
#include<string>

class BilletAbs
{

public :
	virtual void setCout(double nouveauCout)=0;
	virtual double getCout()=0;
	virtual void afficherCout()=0;
	virtual std::string getClassBaseName() = 0;
};

