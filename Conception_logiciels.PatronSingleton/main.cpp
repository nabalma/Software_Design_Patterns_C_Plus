#include "Session.h"
#include <iostream>

int main() {
    Session::createSession("admin42");

    Session* s = Session::getSessionInstance();
    std::cout << "Utilisateur courant : " << s->getUserId() << std::endl;

    std::cout << "== Une nouvelle session, sans deconnection prealable == " << std::endl;
    Session::createSession("admin4444"); 

    Session::logout();  // Déconnexion

    Session::createSession("nouvelUtilisateur");
    std::cout << "Nouveau : " << Session::getSessionInstance()->getUserId() << std::endl;

    return 0;
}
