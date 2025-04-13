#pragma once
#include <vector>
#include "ObservateurAbs.h"
#include "RessourceAbs.h"

class Ressource : RessourceAbs
{

private:
	
	std::vector<ObservateurAbs*> observateurs;
	int stock;
	const int stockLimite = 25;
	
	
public:
	void ajouter(ObservateurAbs* observateur);
	void retirer(ObservateurAbs* observateur);
	void setStock(int nouveauStock);
	int getStock();

	void notifierObservateurs();

};

