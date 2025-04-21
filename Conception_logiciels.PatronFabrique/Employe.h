#pragma once
#include "ProfilAbstrait.h"
#include <string>

class Employe :
    public ProfilAbstrait
{
private:
    std::string nom;
    std::string prenom;
    std::string role = "Employe";
public:
    virtual void afficherProfil();
    Employe(std::string nom, std::string prenom);
    ~Employe() = default;
};
