#pragma once

#include<iostream>

#include "PlanifDepartement.h"
#include "ObservateurAbs.h"



void PlanifDepartement::update() const
{
	std::cout << "Planification Departement ajuste son plan de production ";
	std::cout << std::endl;
};
