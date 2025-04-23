#pragma once
#include "AbstractPackageFactory.h"
class LuxePackageFactory :
    public AbstractPackageFactory
{
public:
	AbstractChambre* creerChambre() override;
	AbstractRestauration* creerRestauration() override;
	AbstractBienEtre* creerBienEtre() override;
	AbstractAcceuilClient* creerAcueuilClient() override;
};

