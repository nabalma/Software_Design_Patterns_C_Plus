#include "GestionnaireCommande.h"

void GestionnaireCommande::executer(CommandeAbstrait* command) 
{
    command->executer();
    undos.push(command);
    while (!redos.empty()) redos.pop();
};
void GestionnaireCommande::redo() 
{
    if (!redos.empty()) {
        CommandeAbstrait* c = redos.top();
        redos.pop();
        c->executer();
        undos.push(c);
    }
};

void GestionnaireCommande::undo() 
{
    if (!undos.empty()) {
        CommandeAbstrait* c = undos.top();
        undos.pop();
        c->annuler();
        redos.push(c);
    }
};
