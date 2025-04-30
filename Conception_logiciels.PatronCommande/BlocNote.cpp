#include "BlocNote.h"
#include <iostream>


void BlocNote::ajouterTexte(std::string texte) 
{
	contenu += texte;
};

void BlocNote::retirerTexte(int longueur) {
    contenu.erase(contenu.size() - longueur, longueur);
};

void BlocNote::afficher() const {
    std::cout << "Contenu : " << contenu << std::endl;
}