#pragma once
#include <string>
#include <iostream>

class Document
{
private:
    std::string nom;
    std::string type;
    int tailleKo;

public:
    // Constructeur
    Document(const std::string& nom, const std::string& type, int tailleKo);

    // Méthode pour afficher les informations du document
    void afficher() const;

    // Getters (si besoin plus tard)
    std::string getNom() const;
    std::string getType() const;
    int getTailleKo() const;
};
