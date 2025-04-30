#include "SecuriteFacade.h"
#include <iostream>

void SecuriteFacade::activerModeSecurite() 
{
std::cout << " ====== Activation du mode Securite du batiment ======= \n";
	portes.verrouillerPortes();
	alarmes.activerAlarme();
	camera.declencherEnregistrement();

}
