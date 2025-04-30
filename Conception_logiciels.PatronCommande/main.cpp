#include "BlocNote.h"
#include "CommandeAjouterTexte.h"
#include "GestionnaireCommande.h"
#include <iostream>

int main() {
    BlocNote bloc;
    GestionnaireCommande gestion;

    CommandeAbstrait* c1 = new CommandeAjouterTexte(&bloc, "Bonjour ");
    CommandeAbstrait* c2 = new CommandeAjouterTexte(&bloc, "le monde !");

    std::cout << "Executer Commande et Afficher" << std::endl;

    gestion.executer(c1);
    bloc.afficher();

    gestion.executer(c2);
    bloc.afficher();

    std::cout << std::endl;

    std::cout << "Undo et Afficher " << std::endl;;
    gestion.undo(); // Annule "le monde !"
    bloc.afficher();

    std::cout << std::endl;

    std::cout << "Redo et Afficher " << std::endl;
    gestion.redo(); // Rejoue "le monde !"
    bloc.afficher();

    std::cout << std::endl;

    delete c1;
    delete c2;
    return 0;
}
