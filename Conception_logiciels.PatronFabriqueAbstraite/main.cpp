#include <iostream>
#include "StandardPackageFactory.h"
#include "LuxePackageFactory.h"

int main()
{
    std::cout << "========= FORMULE STANDARD =========" << std::endl;
    AbstractPackageFactory* standardFactory = new StandardPackageFactory();

    AbstractChambre* chambreS = standardFactory->creerChambre();
    AbstractRestauration* repasS = standardFactory->creerRestauration();
    AbstractBienEtre* bienEtreS = standardFactory->creerBienEtre();
    AbstractAcceuilClient* accueilS = standardFactory->creerAcueuilClient();

    chambreS->decrireProduit();
    chambreS->nettoyer();
    repasS->decrireProduit();
    repasS->afficherMenu();
    bienEtreS->decrireProduit();
    bienEtreS->reserverSpa();
    accueilS->decrireProduit();
    accueilS->guiderClient();

    // Nettoyage mémoire
    delete chambreS;
    delete repasS;
    delete bienEtreS;
    delete accueilS;
    delete standardFactory;

    std::cout << "\n========= FORMULE LUXE =========" << std::endl;
    AbstractPackageFactory* luxeFactory = new LuxePackageFactory();

    AbstractChambre* chambreL = luxeFactory->creerChambre();
    AbstractRestauration* repasL = luxeFactory->creerRestauration();
    AbstractBienEtre* bienEtreL = luxeFactory->creerBienEtre();
    AbstractAcceuilClient* accueilL = luxeFactory->creerAcueuilClient();

    chambreL->decrireProduit();
    chambreL->nettoyer();
    repasL->decrireProduit();
    repasL->afficherMenu();
    bienEtreL->decrireProduit();
    bienEtreL->reserverSpa();
    accueilL->decrireProduit();
    accueilL->guiderClient();

    // Nettoyage mémoire
    delete chambreL;
    delete repasL;
    delete bienEtreL;
    delete accueilL;
    delete luxeFactory;

    return 0;
}
