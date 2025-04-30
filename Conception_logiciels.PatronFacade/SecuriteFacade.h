#pragma once
#include "Portes.h"
#include "Camera.h"
#include "Alarmes.h"


class SecuriteFacade
{
private :
	Camera camera;
	Alarmes alarmes;
	Portes portes;
public:
	void activerModeSecurite();
};

