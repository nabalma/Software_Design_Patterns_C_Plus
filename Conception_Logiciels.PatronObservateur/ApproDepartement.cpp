#pragma once

#include<iostream>

#include "ObservateurAbs.h"
#include "ApproDepartement.h"


void ApproDepartement::update() const 
	{
		std::cout<< "Approvisionnement Departement place une nouvelle commande en urgence  chez le fournisseur ";
		std::cout << std::endl;
	};