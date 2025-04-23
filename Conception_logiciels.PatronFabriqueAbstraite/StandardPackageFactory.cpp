#include "StandardPackageFactory.h"
#include "ChambreStandard.h"
#include "RestaurationStandard.h"
#include "BienEtreStandard.h"
#include "AcceuilClientStandard.h"


AbstractChambre* StandardPackageFactory::creerChambre()
{
	return new ChambreStandard;
};
AbstractRestauration* StandardPackageFactory::creerRestauration()
{
	return new RestaurationStandard;
};
AbstractBienEtre* StandardPackageFactory::creerBienEtre()
{
	return new BienEtreStandard;
};
AbstractAcceuilClient* StandardPackageFactory::creerAcueuilClient()
{
	return new AcceuilClientStandard;
};