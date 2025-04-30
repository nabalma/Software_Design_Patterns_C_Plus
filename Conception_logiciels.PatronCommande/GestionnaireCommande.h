#pragma once
#include "CommandeAbstrait.h"
#include <stack>

class GestionnaireCommande
{
private:
	std::stack<CommandeAbstrait*> undos;
	std::stack<CommandeAbstrait*> redos;

public:
	void executer(CommandeAbstrait* command);
	void redo();
	void undo();

};

