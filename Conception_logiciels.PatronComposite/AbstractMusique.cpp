#include "AbstractMusique.h"

AbstractMusique::~AbstractMusique() = default;

void AbstractMusique::_ajouterMusique(AbstractMusique* /*musique*/) {
    // Ne rien faire par défaut
}

void AbstractMusique::_retirerMusique(AbstractMusique* /*musique*/) {
    // Ne rien faire par défaut
}

std::vector<AbstractMusique*> AbstractMusique::_listerMusique() const {
    return {};
}

