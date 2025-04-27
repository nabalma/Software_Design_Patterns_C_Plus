#pragma once
#include "AbstractMusique.h"
#include <string>


class Chanson :
    public AbstractMusique
{
public:
	Chanson(std::string titre, std::string auteur);
    ~Chanson();

	std::vector<AbstractMusique*> listerMusique() const override;
	void ajouterMusique(AbstractMusique* musique) override;
	void retirerMusique(AbstractMusique* musique) override;

	void lireMusique() const override;
	void afficherTitre() const override;
	

private:
	std::string titre;
	std::string auteur;

};

