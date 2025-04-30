#pragma once
#include "CommandeAbstrait.h"
#include "BlocNote.h"
#include <string>


class CommandeAjouterTexte :
    public CommandeAbstrait
{
private:
	BlocNote* blocNote;
	std::string texte;
public:
	CommandeAjouterTexte(BlocNote* bloc,std::string txt):blocNote(bloc),texte(txt) {};
	void executer() override;
	void annuler() override;
};

