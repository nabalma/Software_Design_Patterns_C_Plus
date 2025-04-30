#pragma once
#include <string>

class BlocNote
{
private:
	std::string contenu;
public:
	void ajouterTexte(std::string texte);
	void retirerTexte(int longueur);
	void afficher() const;
};

