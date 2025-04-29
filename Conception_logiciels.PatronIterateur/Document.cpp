#include "Document.h"

// Constructeur
Document::Document(const std::string& nom, const std::string& type, int tailleKo)
    : nom(nom), type(type), tailleKo(tailleKo)
{
}

// Méthode pour afficher les informations du document
void Document::afficher() const
{
    std::cout << "Nom : " << nom << ", Type : " << type << ", Taille : " << tailleKo << " Ko" << std::endl;
}

// Getters
std::string Document::getNom() const {
    return nom;
}

std::string Document::getType() const {
    return type;
}

int Document::getTailleKo() const {
    return tailleKo;
}
