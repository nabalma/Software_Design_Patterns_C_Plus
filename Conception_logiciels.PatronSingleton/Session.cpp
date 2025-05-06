#include "Session.h"
#include<iostream>

Session* Session::_session = nullptr;

void Session::createSession(std::string userId) {
    if (_session == nullptr) {
        _session = new Session(userId);
    }
    else {
        std::cout << "[Session] Une session est deja active." << std::endl;
    }
}

Session* Session::getSessionInstance() {
    if (_session == nullptr) {
        std::cout << "[Session] Erreur : aucune session active. Veuillez d'abord appeler createSession()." << std::endl;
        return nullptr;
    }
    return _session;
}

std::string Session::getUserId() const { return userId; };

Session::Session(std::string userId):userId(userId) {};

void Session::logout() {
    if (_session != nullptr) {
        std::cout << "[Session] Deconnexion de l'utilisateur : " << _session->userId << std::endl;
        delete _session;
        _session = nullptr;
    }
    else {
        std::cout << "[Session] Aucune session active à deconnecter." << std::endl;
    }
}


