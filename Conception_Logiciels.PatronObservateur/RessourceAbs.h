#pragma once

#pragma once
#include <vector>
#include "ObservateurAbs.h"
#include "RessourceAbs.h"

class RessourceAbs
{

private:
	std::vector<ObservateurAbs*> observateurs;
	int stock;
	int stockLimite;


public:
	virtual void ajouter(ObservateurAbs* observateur)=0;
	virtual void retirer(ObservateurAbs* observateur)=0;
	virtual void setStock(int nouveauStock)=0;
	virtual int getStock()=0;

	virtual void notifierObservateurs()=0;

};

