
# 🧭 Planificateur de Tournées Logistiques (C++ - Template Method)

Ce projet démontre l'application du **patron de conception Template Method** dans un contexte opérationnel concret : la **gestion de tournées de livraison** pour différents secteurs (alimentaire, pharmaceutique, industriel).

## 🎯 Objectif

Fournir un modèle de planification de tournée :
- **Structuré** : même enchaînement global d'étapes
- **Flexible** : comportement spécifique pour chaque secteur
- **Extensible** : ajout facile de nouveaux types de tournées

## 🧱 Architecture

Le cœur du projet repose sur une classe abstraite `PlanificateurDeTournee` qui définit le déroulé standard d'une tournée :

```cpp
void planifierTournee() {
    preparerLeChargement();
    brieferLeChauffeur();
    suivreLaCargaison();     // Étape personnalisée
    gererLesControlesFinaux();
}
✔️ Méthodes communes :
preparerLeChargement()

brieferLeChauffeur()

gererLesControlesFinaux()

✏️ Méthode personnalisée (à surcharger) :
suivreLaCargaison() — chaque sous-classe redéfinit cette méthode

🧪 Sous-classes implémentées

Classe	Comportement de suivreLaCargaison()
TourneeAlimentaire	Suivi de la température (produits frais)
TourneePharmaceutique	Traçabilité et contrôle des conditions de transport
TourneeIndustrielle	Vérification des charges et sécurité des équipements lourds
🧰 Lancer le projet
1. Compiler :
Utilisez un compilateur C++ (g++, clang++, MSVC...)

bash
Copier
Modifier
g++ main.cpp PlanificateurDeTournee.cpp TourneeAlimentaire.cpp TourneePharmaceutique.cpp TourneeIndustrielle.cpp -o tournee
2. Exécuter :
bash
Copier
Modifier
./tournee
📈 Patron de conception utilisé
🧩 Template Method

Permet de définir un squelette d'algorithme dans une classe mère tout en laissant certaines étapes personnalisables dans les sous-classes.

📌 Diagramme UML
Un diagramme de classes UML est disponible dans le dépôt (voir diagramme.png).

🤝 Contributions
Feel free to fork, commenter ou proposer d'autres types de tournées 🛠️