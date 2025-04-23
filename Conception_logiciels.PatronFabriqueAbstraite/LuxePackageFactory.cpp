#include "LuxePackageFactory.h"

#include "ChambreLuxe.h"
#include "RestaurationLuxe.h"
#include "BienEtreLuxe.h"
#include "AcceuilClientLuxe.h"


AbstractChambre* LuxePackageFactory::creerChambre()
{
	return new ChambreLuxe;
};
AbstractRestauration* LuxePackageFactory::creerRestauration()
{
	return new RestaurationLuxe;
};
AbstractBienEtre* LuxePackageFactory::creerBienEtre()
{
	return new BienEtreLuxe;
};
AbstractAcceuilClient* LuxePackageFactory::creerAcueuilClient()
{
	return new AcceuilClientLuxe;
};
