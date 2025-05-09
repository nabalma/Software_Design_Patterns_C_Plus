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

| Patron                | Dossier associé                                     | Contexte d'application |
|-----------------------|-----------------------------------------------------|-------------------------|
| 🧠 Stratégie           | `Conception_Logiciels.PatronStrategie`              | Un **robot nettoyeur** adapte dynamiquement sa stratégie selon le **type de sol détecté** (tapis, carrelage…). |
| 👁️ Observateur         | `Conception_Logiciels.PatronObservateur`            | Un **système de règles de construction** notifie automatiquement les utilisateurs (ingénieur, architecte…) en fonction de changements déclenchés dans le modèle. |
| 🎨 Décorateur          | `Conception_Logiciels.PatronDecorateur`             | Un système de **réservation de billets d’avion** permet d’ajouter dynamiquement des **options personnalisées** telles que bagages, repas ou assurance. |
| 🧰 Méthode Template    | `Conception_Logiciels.PatronMethode`                | Un **planificateur de tournées de livraison** suit une structure d’algorithme fixe, mais laisse certaines étapes spécifiques aux sous-classes selon le **secteur de livraison**. |
| 🏭 Fabrique            | `Conception_Logiciels.PatronFabrique`               | Un **générateur de profils utilisateurs** instancie dynamiquement des objets `Admin`, `Client`, ou `Employé` à partir de **fabriques spécialisées**. |
| 🏨 Fabrique Abstraite  | `Conception_Logiciels.PatronFabriqueAbstraite`      | Un **système hôtelier** crée des **formules complètes (chambre + services)** selon les gammes `Standard`, `Confort`, ou `Luxe`, via des **familles de produits cohérentes**. |
| 🧱 Composite           | `Conception_Logiciels.PatronComposite`              | Une **application musicale** gère des **playlists récursives**, contenant à la fois des morceaux simples et d’autres playlists, tout en traitant l’ensemble uniformément. |
| 🔁 Itérateur           | `Conception_Logiciels.PatronIterateur`              | Un **dépôt documentaire** est parcouru sans exposer sa structure interne, grâce à un **itérateur abstrait** qui permet une navigation uniforme. |
| 📝 Commande            | `Conception_Logiciels.PatronCommande`               | Un **bloc-notes** permet d’enregistrer des commandes (`AjoutTexte`, `Annuler`, `Rétablir`) pour appliquer et revenir sur des modifications de façon centralisée. |
| 🔌 Adaptateur          | `Conception_Logiciels.PatronAdaptateurFacade`       | Un **module de paiement** adapte une API externe (`StripeAPI`) pour la rendre compatible avec une interface interne (`PasserellePaiement`), via héritage ou composition. |
| 🔒 Singleton           | `Conception_Logiciels.PatronSingleton`              | Un **gestionnaire de session** garantit qu'une seule instance est active dans l’application, centralisant l’accès à l’utilisateur connecté. |
| 🔄 État                | `Conception_Logiciels.PatronEtat`                   | Un **système de connexion réseau** change dynamiquement de comportement en fonction de son état : déconnecté, tentative de connexion, connecté. |

---

## 🗂️ Structure des dossiers

Chaque patron est un projet Visual Studio et comprend :
- Les **classes représentant les rôles du patron** (abstraits, concrets, interfaces)
- Un fichier `main.cpp` pour **démontrer le comportement à l'exécution**
- Un **diagramme de classes UML** (souvent généré avec *Enterprise Architect*)

📁 Exemple d'organisation :


