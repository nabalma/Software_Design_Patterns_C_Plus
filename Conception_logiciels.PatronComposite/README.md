# 🎶 Projet C++ — Design Pattern Composite 🎶

## 📚 Présentation

Ce projet met en œuvre le **patron de conception Composite** en C++, dans le contexte de la **gestion de playlists musicales**.

Le but est de permettre à des **objets simples** (des chansons) et à des **composites** (des playlists contenant des chansons ou d'autres playlists) d'être **manipulés uniformément** grâce à une **interface abstraite commune**.

---

## 🏗️ Architecture du projet

Le projet est structuré autour de trois principales classes :

- **AbstractMusique** (classe abstraite) :  
  ➔ Déclare les méthodes communes pour toutes les entités musicales (`lireMusique`, `ajouterMusique`, `retirerMusique`, `listerMusique`, `afficherTitre`, `calculerDuree`).

- **Chanson** (classe feuille) :  
  ➔ Représente une musique individuelle avec un titre, un auteur et une durée.  
  ➔ Ne peut ni contenir ni retirer d'autres éléments.

- **PlayList** (classe composite) :  
  ➔ Peut contenir plusieurs objets `AbstractMusique` (chansons ou playlists).  
  ➔ Gère dynamiquement l'ajout, le retrait et la lecture récursive de ses éléments.

---

## 🚀 Fonctionnalités principales

- 🎧 **Lecture automatique** de toutes les chansons d'une playlist, même imbriquées.
- ➕ **Ajout** dynamique d'une chanson ou d'une sous-playlist.
- ➖ **Retrait** dynamique d'une chanson ou d'une sous-playlist.
- ♾️ **Imbrication infinie** de playlists dans des playlists (méga composites).
- 📜 **Affichage des titres** et **calcul de la durée totale** (facilement extensible).

---

🏗️ Architecture du projet
AbstractMusique (classe abstraite) :
➔ Interface commune pour tous les éléments musicaux (lireMusique, ajouterMusique, retirerMusique, listerMusique, afficherTitre, calculerDuree).

Chanson (classe feuille) :
➔ Représente une musique individuelle avec un titre, un auteur et une durée.
➔ Ne peut pas contenir d'autres éléments.

PlayList (classe composite) :
➔ Peut contenir plusieurs objets AbstractMusique (des chansons ou d'autres playlists).
➔ Permet une organisation récursive de collections musicales.

---

🚀 Fonctionnalités principales
🎯 Lecture unifiée :
Une seule méthode lireMusique() permet de lire aussi bien une chanson simple qu'une playlist entière, même imbriquée.

🔁 Ajout et retrait dynamiques :
Les chansons et sous-playlists peuvent être ajoutées ou retirées dynamiquement.

♾️ Imbrication infinie :
Une PlayList peut contenir d'autres PlayLists sans limitation de profondeur.

📜 Affichage des titres :
Affichage de tous les titres de manière récursive.

📈 Extensibilité facile :
La structure permet d'ajouter de nouvelles fonctionnalités (ex : calcul de la durée totale) sans modifier la logique principale.

📈 Diagramme UML
Le projet contient également un diagramme de classes UML disponible dans :
diagramme_classes_composite.png

Il présente :

Les relations entre AbstractMusique, Chanson et PlayList,

L'usage du polymorphisme et du design Composite.

---

🧪 Exemples d'utilisation
Création de chansons individuelles.

Regroupement de plusieurs chansons dans une PlayList.
Insertion de PlayLists dans d'autres PlayLists (méga composites).
Lecture automatique et récursive de toute la structure avec un seul appel lireMusique().
Affichage de tous les titres sans distinction entre chansons et sous-playlists.

🎯 Compétences mises en œuvre
- ⚙️ Programmation orientée objet en C++
- 🏗️ Application avancée du design pattern Composite
- ♻️ Gestion dynamique de mémoire (new, delete)
- 🔁 Implémentation de structures récursives performantes
- 🗂️ Organisation modulaire et séparation des responsabilités en .h et .cpp


## 📂 Arborescence du projet

```text
/Conception_logiciels.PatronComposite
│
├── AbstractMusique.h
├── AbstractMusique.cpp
├── Chanson.h
├── Chanson.cpp
├── PlayList.h
├── PlayList.cpp
├── main.cpp
├── diagramme_classes_composite.png  (Diagramme UML)
└── README.md
