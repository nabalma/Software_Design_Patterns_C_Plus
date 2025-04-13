
#pragma once

#include<iostream>

#include "EntrepotDepartement.h"
#include "ObservateurAbs.h"

void EntrepotDepartement::update() const
{
	std::cout << "Entreposage Departement transfert le stock de securite pour mise a consommation ";
	std::cout << std::endl;
};
