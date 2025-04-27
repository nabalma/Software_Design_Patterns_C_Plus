#include "Chanson.h"
#include <iostream>

Chanson::Chanson(std::string titre,std::string auteur): titre(titre),auteur(auteur) {};
Chanson::~Chanson() = default;


std::vector<AbstractMusique*> Chanson::listerMusique() const {
	return _listerMusique();
};

void Chanson::ajouterMusique(AbstractMusique* musique) { _ajouterMusique(nullptr); };
void Chanson::retirerMusique(AbstractMusique* musique) { _retirerMusique(nullptr); };

void Chanson::lireMusique() const { std::cout << " - Lecture en cours : Titre << " << titre << " >> , Auteur : << " << auteur <<" >>";  std::cout << "\n";
}
void Chanson::afficherTitre() const { std::cout << titre;   std::cout << "\n";
};

