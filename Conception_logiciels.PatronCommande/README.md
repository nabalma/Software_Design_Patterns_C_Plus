
# 📝 Bloc-notes avec Undo / Redo (C++ – Patron Commande)

Ce projet illustre l’utilisation du **patron de conception Commande** (*Command Pattern*) pour implémenter un système simple de gestion de texte dans un bloc-notes, avec support des fonctionnalités **undo** et **redo**.

---

## 🎯 Objectif

Permettre la modification du contenu d’un bloc-notes via des commandes encapsulées.
Gérer l’annulation (undo) et le rétablissement (redo) des actions de manière fluide.
Illustrer le patron Commande dans un contexte simple mais réaliste.
Favoriser l’extensibilité du système (ajout de commandes futures).

---

## 🧩 Design Pattern utilisé : Commande

Composant	Rôle dans le pattern	Classe(s) implémentées
Commande Abstraite	Interface commune (executer() / annuler())	CommandeAbstrait
Commande Concrète	Exécute l’ajout de texte	AjouterTexte
Récepteur	Contient le texte modifiable	BlocNote, Contenu
Gestionnaire de commandes	Historique et gestion undo/redo	GestionnaireCommandes
Client	Crée et exécute les commandes	main.cpp

---

## ⚙️ Fonctionnement
L’utilisateur saisit une commande (par exemple : ajouter une phrase).
La commande est exécutée sur le bloc-notes (BlocNote).
Elle est enregistrée dans la pile undo.
Une commande d’annulation transfère cette commande dans la pile redo.
Une nouvelle commande vide la pile redo.

---


## 📁 Arborescence du projet

```plaintext
BlocNote_Commande/
├── CommandeAbstrait.h
├── AjouterTexte.h / AjouterTexte.cpp
├── BlocNote.h / BlocNote.cpp
├── Contenu.h / Contenu.cpp
├── GestionnaireCommandes.h / GestionnaireCommandes.cpp
└── main.cpp
---
