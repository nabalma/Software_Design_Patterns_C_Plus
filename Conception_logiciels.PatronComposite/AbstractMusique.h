#pragma once
#include <vector>
class AbstractMusique
{
public :
		virtual ~AbstractMusique();

	

	virtual std::vector<AbstractMusique*> listerMusique() const=0;
	virtual void ajouterMusique(AbstractMusique* musique) =0;
	virtual void retirerMusique(AbstractMusique* musique) =0;

	virtual void lireMusique() const =0;
	virtual void afficherTitre() const=0 ;



protected:
	std::vector<AbstractMusique*>_listerMusique() const;
	void _ajouterMusique(AbstractMusique* musique);
	void _retirerMusique(AbstractMusique* musique);

};

