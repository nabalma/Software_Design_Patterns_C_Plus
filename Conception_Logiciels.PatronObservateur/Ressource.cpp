#include "Ressource.h"
#include <iostream>



void Ressource::ajouter(ObservateurAbs* observateur) 
{
	if (observateur != nullptr) {
		observateurs.push_back(observateur);
		std::cout<< "Observateur ajoutee avec succes.";
		std::cout << std::endl;
	}
	else {std::cout<< "Echec : observateur nul.";
	std::cout << std::endl;
	}
	
};
void Ressource::retirer(ObservateurAbs* observateur) 
{
	auto it = std::find(observateurs.begin(), observateurs.end(), observateur);
	if (it != observateurs.end()) {
		observateurs.erase(it);
		std::cout<< "Observateur retiree avec succes.";
		std::cout << std::endl;
	}
	else {std::cout << "Observateur non trouve.";
	std::cout << std::endl;
	}
	
};
void Ressource::notifierObservateurs() 
{
	for (ObservateurAbs* obs :observateurs)
	{
		obs->update();
	}
};

void Ressource::setStock(int nouveauStock) {
	stock = nouveauStock;
	std::cout << "Stock mis a jour a "<<stock<< std::endl;
	if (stock <= stockLimite and observateurs.size()!=0) {
		std::cout << "-- Notifications --" <<std::endl;
		notifierObservateurs();
	}
	std::cout << std::endl;
};

int Ressource::getStock() {
	return stock;
};