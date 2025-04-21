#include <iostream>
#include "GenerateurAdmin.h"
#include "GenerateurClient.h"
#include "GenerateurEmploye.h"
#include "ProfilAbstrait.h"

int main() {
    // G�n�rateurs concrets
    GenerateurProfilAbstrait* generateurAdmin = new GenerateurAdmin();
    GenerateurProfilAbstrait* generateurClient = new GenerateurClient();
    GenerateurProfilAbstrait* generateurEmploye = new GenerateurEmploye();

    // Cr�ation des profils (via factory method)
    ProfilAbstrait* admin = generateurAdmin->creerUtilisateur("Toure", "Ousmane");
    ProfilAbstrait* client = generateurClient->creerUtilisateur("Diallo", "Fatou");
    ProfilAbstrait* employe = generateurEmploye->creerUtilisateur("Sow", "Amadou");

    // Affichage des profils
    std::cout << "===== Profils crees =====" << std::endl;
    admin->afficherProfil();
    client->afficherProfil();
    employe->afficherProfil();

    // Lib�ration m�moire
    delete admin;
    delete client;
    delete employe;

    delete generateurAdmin;
    delete generateurClient;
    delete generateurEmploye;

    return 0;
}
