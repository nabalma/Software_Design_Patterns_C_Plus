# 🧠 Patrons de conception en C++

Bienvenue dans ce dépôt dédié à l’implémentation des **patrons de conception logiciels** en **langage C++ moderne**.

📌 Ce projet s’inscrit dans une initiative personnelle visant à :
- Approfondir mes connaissances en **conception orientée objet**
- Développer des exemples **clairs, modulaires et maintenables**
- Partager des modèles réutilisables dans le cadre professionnel
- Valoriser mes compétences auprès d’éventuels recruteurs

---

## 🎯 Objectif

Ce dépôt a pour but de fournir des **implémentations simples, réalistes et bien structurées** des principaux **patrons de conception**, un par un, en **C++**.

Chaque patron est accompagné de :
- ✅ Un exemple concret et compréhensible
- ✅ Un contexte métier réaliste
- ✅ Une structure de classes inspirée UML
- ✅ Un fichier `main.cpp` de démonstration prêt à compiler

---

## 📁 Patrons déjà implémentés

| Patron              | Dossier associé                                  | Statut     |
|---------------------|--------------------------------------------------|------------|
| 🧠 Stratégie         | `Conception_Logicials.PatronStrategie`           | ✅ Terminé |
| 👁️ Observateur       | `Conception_Logicials.PatronObservateur`         | ✅ Terminé |
| 🎨 Décorateur        | `Conception_Logicials.PatronDecorateur`          | ✅ Terminé |
| 🧰 Patron de méthode | `Conception_Logicials.PatronTemplateMethod`      | ✅ Terminé |
| 🏗️ À venir...        | `PatronFactory`, `PatronComposite`, etc.         | 🔄 En cours |

---

## 🧩 Contexte d'application des patrons de conception appliqués

| Patron                | Dossier associé                             | Contexte d'application                                                                 |
|-----------------------|---------------------------------------------|-----------------------------------------------------------------------------------------|
| 🧠 Stratégie          | `Conception_Logicials.PatronStrategie`       | Un **robot nettoyeur** adapte dynamiquement sa stratégie selon le **type de sol détecté** (tapis, carrelage, pavé…). |
| 👁️ Observateur        | `Conception_Logicials.PatronObservateur`     | Un **système de règles de construction** notifie automatiquement les utilisateurs (ingénieur, architecte…) en cas de changement. |
| 🎨 Décorateur         | `Conception_Logicials.PatronDecorateur`      | Un système de **réservation de billets d’avion** permet d’ajouter dynamiquement des **options** (bagage, repas, etc.) à un billet de base. |
| 🧰 Patron de méthode  | `Conception_Logicials.PatronTemplateMethod`  | Un **planificateur de tournées de livraison** suit un enchaînement fixe avec des étapes personnalisables selon le **secteur** (alimentaire, pharmaceutique…). |

---
## 🗂️ Structure des dossiers
Chaque patron est un projet Visual Studio et comprend les classes implementant la structure du patron, de meme qun main.cpp pour tester les sorties consoles.
Vous trouverez egalement dans le dossier du projet un image du diagramme de classe edité avec Entreprise Architecte
