#pragma once
#include "AbstractChambre.h"
#include "AbstractRestauration.h"
#include "AbstractBienEtre.h"
#include "AbstractAcceuilClient.h"


class AbstractPackageFactory
{
public:
	virtual AbstractChambre* creerChambre() = 0;
	virtual AbstractRestauration* creerRestauration() = 0;
	virtual AbstractBienEtre* creerBienEtre() = 0;
	virtual AbstractAcceuilClient* creerAcueuilClient() = 0;

	virtual ~AbstractPackageFactory() = default;
};

