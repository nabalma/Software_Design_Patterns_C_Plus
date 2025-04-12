#include "Robot.h"
#include <stdexcept>


Robot::Robot(StrategieNettoyage* strategieNettoyage)
{
	if (strategieNettoyage == nullptr)
		throw std::invalid_argument("Strat�gie de nettoyage obligatoire !");
	this->strategieNettoyage = strategieNettoyage;
}

void Robot::setStrategieNettoyage(StrategieNettoyage* nouvelleStrategie) 
{
	if (nouvelleStrategie !=nullptr) {
		strategieNettoyage = nouvelleStrategie;
	}
			
}
std::string Robot::nettoyer() const 
{
	if (strategieNettoyage != nullptr) {	return strategieNettoyage->nettoyer();}

	else {

return "[Erreur] Aucune strat�gie d�finie.";
}
};