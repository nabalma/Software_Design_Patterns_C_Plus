#include "PlayList.h"
#include <algorithm>




PlayList::PlayList()=default;
PlayList::~PlayList()=default;

std::vector<AbstractMusique*> PlayList::listerMusique() const {
	return playList;
};

void PlayList::ajouterMusique(AbstractMusique* musique) { playList.push_back(musique); };

void PlayList::retirerMusique(AbstractMusique* musique) {
	auto it = std::find(playList.begin(), playList.end(), musique);
	if (it != playList.end()) {
		playList.erase(it);
	}
}

void PlayList::lireMusique() const { 
	for (AbstractMusique* musique :playList)
	{
		musique->lireMusique();
	}
	; }
void PlayList::afficherTitre() const {
	for (AbstractMusique* musique : playList)
	{
		musique->afficherTitre();
	}
	;
}
