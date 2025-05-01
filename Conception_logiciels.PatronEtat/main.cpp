#include "Connexion.h"

int main() {
    Connexion connexion;

    connexion.etablirConnexion();
    connexion.connexionReussie();
    connexion.deconnecter();

    return 0;
}