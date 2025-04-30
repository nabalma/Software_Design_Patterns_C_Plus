#include "CommandeAjouterTexte.h"


void CommandeAjouterTexte::executer() 
{
	blocNote->ajouterTexte(texte);
};
void CommandeAjouterTexte::annuler() 
{
	blocNote->retirerTexte(texte.size());
};
