#pragma once
#include "AbstractPackageFactory.h"
class StandardPackageFactory :
    public AbstractPackageFactory
{
public:
	AbstractChambre* creerChambre() override;
	AbstractRestauration* creerRestauration() override;
	AbstractBienEtre* creerBienEtre() override;
	AbstractAcceuilClient* creerAcueuilClient() override;
};

