#include "AbstractMusique.h"

AbstractMusique::~AbstractMusique() = default;

void AbstractMusique::_ajouterMusique(AbstractMusique* /*musique*/) {
    // Ne rien faire par d�faut
}

void AbstractMusique::_retirerMusique(AbstractMusique* /*musique*/) {
    // Ne rien faire par d�faut
}

std::vector<AbstractMusique*> AbstractMusique::_listerMusique() const {
    return {};
}

