#pragma once
#include "ProfilAbstrait.h"
#include <string>

class Administrateur :
    public ProfilAbstrait
{

private:
    std::string nom;
    std::string prenom;
    std::string role = "Administrateur";
public:
    virtual void afficherProfil();
    Administrateur(std::string nom, std::string prenom);
    ~Administrateur() = default;
};

