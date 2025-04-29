# 🔁 Patron de Conception : Itérateur (C++)

Ce projet illustre l'application rigoureuse du **patron de conception Itérateur** (Iterator Pattern)  
dans un contexte professionnel de **gestion de documents structurés**.

---

## 📁 Arborescence du projet

```plaintext
Conception_Logiciels.PatronIterateur/
├── Document.h / Document.cpp
├── DepotDocumentAbstrait.h
├── DepotDocumentConcret.h / DepotDocumentConcret.cpp
├── IterateurAbstrait.h
├── IterateurDepotDocument.h / IterateurDepotDocument.cpp
└── main.cpp
```

---

## 🧠 Objectif

Permettre de parcourir séquentiellement tous les documents d’un dépôt,  
sans exposer sa structure interne ni dépendre du mode de stockage utilisé (`std::vector`).

---

## 🧩 Design Pattern utilisé

| Composant                  | Rôle UML          | Implémentation                  |
|-----------------------------|-------------------|----------------------------------|
| `DepotDocumentAbstrait<T>`   | Agrégat Abstrait   | Interface générique              |
| `DepotDocumentConcret`       | Agrégat Concret    | Stocke les documents (`std::vector<Document>`) |
| `IterateurAbstrait<T>`       | Itérateur Abstrait | Interface d’itérateur |
| `IterateurDepotDocument`     | Itérateur Concret  | Implémente la navigation |
| `main.cpp`                   | Client             | Utilise uniquement les interfaces abstraites |

---

## ⚙️ Fonctionnement

1. Le dépôt (`DepotDocumentConcret`) contient une **collection dynamique** de documents sous forme de `std::vector`.
2. Le client appelle `creerIterateur()` pour obtenir un **itérateur abstrait**.
3. L’itérateur permet de parcourir les documents **sans exposer** leur organisation interne :
   - `Premier()` : se positionner au premier document
   - `Suivant()` : passer au document suivant
   - `testFin()` : vérifier si la fin du dépôt est atteinte
   - `getCourant()` : obtenir le document actuel

---

## ✨ Exemple d’utilisation

```cpp
#include "DepotDocumentConcret.h"
#include "Document.h"
#include "IterateurAbstrait.h"

int main() {
    DepotDocumentConcret depot;

    depot.ajouterDocument(Document("Contrat A", "Contrat", 120));
    depot.ajouterDocument(Document("Rapport Financier", "Rapport", 540));

    IterateurAbstrait<Document>* iterateur = depot.creerIterateur();

    for (iterateur->Premier(); !iterateur->testFin(); iterateur->Suivant()) {
        iterateur->getCourant().afficher();
    }

    delete iterateur;

    return 0;
}
```

---

## ✅ Résultats attendus en console

```plaintext
Nom : Contrat A, Type : Contrat, Taille : 120 Ko
Nom : Rapport Financier, Type : Rapport, Taille : 540 Ko
```

---

## 📌 Concepts démontrés

- ✅ Itérateur personnalisable indépendant du stockage
- ✅ Séparation stricte interface / implémentation
- ✅ Encapsulation complète de la structure (`vector`)
- ✅ Respect du patron de conception Itérateur
- ✅ Application
