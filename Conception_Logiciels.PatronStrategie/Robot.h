#pragma once
#include "StrategieNettoyage.h"


class Robot
{

private:
StrategieNettoyage* strategieNettoyage;


public :
	Robot(StrategieNettoyage* strategieNettoyage);
	~Robot()=default;
	
	void setStrategieNettoyage(StrategieNettoyage* nouvelleStrategie);
	std::string nettoyer() const;


};

