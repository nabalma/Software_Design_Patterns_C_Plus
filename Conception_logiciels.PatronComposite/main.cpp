#include "AbstractMusique.h"
#include "Chanson.h"
#include "PlayList.h"
#include <iostream>

int main()
{
    // Cr�ation de chansons individuelles
    AbstractMusique* chanson1 = new Chanson("Mode Avion", "Favey");
    AbstractMusique* chanson2 = new Chanson("Soleil Levant", "Nina");
    AbstractMusique* chanson3 = new Chanson("Horizons Lointains", "Leo");
    AbstractMusique* chanson4 = new Chanson("�toiles Filantes", "Zo�");

    // Cr�ation de deux petites playlists
    PlayList* chillPlaylist = new PlayList();
    chillPlaylist->ajouterMusique(chanson1);
    chillPlaylist->ajouterMusique(chanson2);

    PlayList* voyagePlaylist = new PlayList();
    voyagePlaylist->ajouterMusique(chanson3);
    voyagePlaylist->ajouterMusique(chanson4);

    // Cr�ation d'une grande playlist qui contient les deux petites
    PlayList* megaPlaylist = new PlayList();
    megaPlaylist->ajouterMusique(chillPlaylist);   
    megaPlaylist->ajouterMusique(voyagePlaylist);  

    // Lecture de toute la grande PlayList
    std::cout << "=== Lecture de la Mega PlayList ===\n";
    megaPlaylist->lireMusique();

    std::cout << "\n\n=== Titres dans la Mega PlayList ===\n";
    megaPlaylist->afficherTitre();

    std::cout << "\n";

    // Nettoyage de la m�moire
   
    for (AbstractMusique* musique : chillPlaylist->listerMusique()) {
        delete musique;
    }
    delete chillPlaylist;

    for (AbstractMusique* musique : voyagePlaylist->listerMusique()) {
        delete musique;
    }
    delete voyagePlaylist;

    delete megaPlaylist; // car megaPlaylist ne contient que des PlayList (d�j� supprim�es)

    return 0;
}
