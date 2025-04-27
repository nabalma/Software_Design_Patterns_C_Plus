#pragma once
#include "AbstractMusique.h"
#include <vector>



class PlayList :
    public AbstractMusique
{
public:
    PlayList();
    ~PlayList();



	std::vector<AbstractMusique*> listerMusique() const override;
	void ajouterMusique(AbstractMusique* musique) override;
	void retirerMusique(AbstractMusique* musique) override;

	void lireMusique() const override;
	void afficherTitre() const override;


private:
    std::vector<AbstractMusique*> playList;
};

