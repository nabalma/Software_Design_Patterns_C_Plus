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
| Patron               | Dossier associé                                         | Statut     |
|----------------------|---------------------------------------------------------|------------|
| 🧠 Stratégie          | `Conception_Logiciels.PatronStrategie`                 | ✅ Terminé |
| 👁️ Observateur        | `Conception_Logiciels.PatronObservateur`               | ✅ Terminé |
| 🎨 Décorateur         | `Conception_Logiciels.PatronDecorateur`                | ✅ Terminé |
| 🧰 Méthode Template   | `Conception_Logiciels.PatronMethode`                   | ✅ Terminé |
| 🏭 Fabrique           | `Conception_Logiciels.PatronFabrique`                  | ✅ Terminé |
| 🏨 Fabrique Abstraite | `Conception_Logiciels.PatronFabriqueAbstraite`         | ✅ Terminé |
| 🧱 Composite          | `Conception_Logiciels.PatronComposite`                 | ✅ Terminé |
| 🔁 Itérateur          | `Conception_Logiciels.PatronIterateur`                 | ✅ Terminé |
| 📝 Commande           | `Conception_Logiciels.PatronCommande`                  | ✅ Terminé |
| 🔌 Adaptateur         | `Conception_Logiciels.PatronAdaptateurFacade`          | ✅ Terminé |
| 🔒 Singleton          | `Conception_Logiciels.PatronSingleton`                 | ✅ Terminé |
| 🔄 État               | `Conception_Logiciels.PatronEtat`                      | ✅ Terminé |

---

## 🧩 Contexte d'application des patrons de conception appliqués

| Patron                | Dossier associé                                     | Contexte d'application                                                                                      |
|-----------------------|-----------------------------------------------------|--------------------------------------------------------------------------------------------------------------|
| 🧠 Stratégie           | `Conception_Logiciels.PatronStrategie`              | Un **robot nettoyeur** adapte dynamiquement sa stratégie selon le **type de sol détecté** (tapis, carrelage…). |
| 👁️ Observateur         | `Conception_Logiciels.PatronObservateur`            | Un **système de règles de construction** notifie automatiquement les utilisateurs (ingénieur, architecte…).  |
| 🎨 Décorateur          | `Conception_Logiciels.PatronDecorateur`             | Un système de **réservation de billets d’avion** permet d’ajouter dynamiquement des **options personnalisées**. |
| 🧰 Méthode Template    | `Conception_Logiciels.PatronMethode`                | Un **planificateur de tournées de livraison** suit une structure fixe avec des étapes selon le **secteur**. |
| 🏭 Fabrique            | `Conception_Logiciels.PatronFabrique`               | Un **générateur de profils utilisateurs** (admin, client, employé) repose sur des **fabriques dédiées**.       |
| 🏨 Fabrique Abstraite  | `Conception_Logiciels.PatronFabriqueAbstraite`      | Un **hôtel** propose des **formules packagées** (standard, confort, luxe) modélisées par des **fabriques concrètes**. |
| 🧱 Composite           | `Conception_Logiciels.PatronComposite`              | Une **application musicale** permet de composer des **playlists récursives** avec chansons et sous-playlists. |
| 🔁 Itérateur           | `Conception_Logiciels.PatronIterateur`              | Un **dépôt de documents** est parcouru de manière **uniforme et indépendante** grâce à un **itérateur abstrait**. |
| 📝 Commande            | `Conception_Logiciels.PatronCommande`               | Un **bloc-notes intelligent** permet d'**annuler et rétablir** les actions effectuées sur un panier ou un contenu. |
| 🔌 Adaptateur          | `Conception_Logiciels.PatronAdaptateurFacade`       | Un **système de paiement** permet d’intégrer une API externe (`StripeAPI`) via deux versions d’**adaptateurs**. |
| 🔒 Singleton           | `Conception_Logiciels.PatronSingleton`              | Un **gestionnaire de session utilisateur** assure qu'une seule session est active à tout moment, centralisant l'accès à l'utilisateur connecté. |
| 🔄 État                | `Conception_Logiciels.PatronEtat`                   | Un **système de connexion** change dynamiquement de comportement selon l'état : déconnecté, en cours de connexion, connecté. |

---

## 🗂️ Structure des dossiers

Chaque patron est un projet Visual Studio et comprend :
- Les **classes représentant les rôles du patron** (abstraits, concrets, interfaces)
- Un fichier `main.cpp` pour **démontrer le comportement à l'exécution**
- Un **diagramme de classes UML** (souvent généré avec *Enterprise Architect*)

📁 Exemple d'organisation :


