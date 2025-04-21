#pragma once
#include "ProfilAbstrait.h"
#include <string>
class Client :
    public ProfilAbstrait
{

private:
    std::string nom;
    std::string prenom;
    std::string role = "Client";
public:
    virtual void afficherProfil();
    Client(std::string nom, std::string prenom);
    ~Client() = default;
};


