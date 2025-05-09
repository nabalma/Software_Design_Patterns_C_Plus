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

## 🧩 Contexte d'application des patrons de conception appliqués

| Patron                | Dossier associé                                     | Contexte d'application |
|-----------------------|-----------------------------------------------------|-------------------------|
| 🧠 Stratégie           | `Conception_Logiciels.PatronStrategie`              | Un **robot nettoyeur** adapte dynamiquement sa stratégie de déplacement en fonction du **type de sol détecté** (tapis, carrelage, parquet, etc.), en changeant de comportement à l'exécution sans modifier son code. |
| 👁️ Observateur         | `Conception_Logiciels.PatronObservateur`            | Un **système de règles de construction** notifie automatiquement les utilisateurs concernés (ingénieur, architecte, gestionnaire) lorsqu’une nouvelle règle est ajoutée ou lorsqu’un élément du modèle est modifié. |
| 🎨 Décorateur          | `Conception_Logiciels.PatronDecorateur`             | Un **service de réservation aérienne** permet d’ajouter dynamiquement des **services optionnels** (bagage, repas, assurance, choix de siège) à une réservation de base sans modifier la classe principale. |
| 🧰 Méthode Template    | `Conception_Logiciels.PatronMethode`                | Un **planificateur de tournées logistiques** définit une **structure commune d’algorithme** pour organiser une livraison, tout en laissant les sous-classes spécialiser les étapes selon le **secteur ou la région desservie**. |
| 🏭 Fabrique            | `Conception_Logiciels.PatronFabrique`               | Un **générateur de profils utilisateurs** permet de créer différents types de comptes (`Admin`, `Client`, `Employé`) via des **fabriques dédiées**, tout en masquant les détails d’instanciation au client. |
| 🏨 Fabrique Abstraite  | `Conception_Logiciels.PatronFabriqueAbstraite`      | Un **système de réservation d’hôtel** génère dynamiquement des **formules complètes** selon la gamme choisie (Standard, Confort, Luxe), chaque formule combinant chambre, restauration, services et options réseau. |
| 🧱 Composite           | `Conception_Logiciels.PatronComposite`              | Une **application de gestion musicale** permet à l’utilisateur de manipuler de manière uniforme des **chansons individuelles** et des **playlists** contenant d’autres playlists ou chansons, en mode récursif. |
| 🔁 Itérateur           | `Conception_Logiciels.PatronIterateur`              | Un **dépôt de documents** met à disposition un **parcours uniforme** de ses éléments (fichiers, dossiers), sans exposer la structure sous-jacente (vecteur, liste, arbre) au client. |
| 📝 Commande            | `Conception_Logiciels.PatronCommande`               | Un **bloc-notes intelligent** gère les actions de l’utilisateur sous forme de **commandes** (ajout de texte, suppression, annulation, rétablissement) permettant un historique fluide et réversible. |
| 🔌 Adaptateur          | `Conception_Logiciels.PatronAdaptateurFacade`       | Un **module de paiement** adapte une API tierce (`StripeAPI`) à une interface maison (`PasserellePaiement`), grâce à deux types d’adaptateurs (par héritage et par composition), facilitant l’intégration et le changement d’API. |
| 🔒 Singleton           | `Conception_Logiciels.PatronSingleton`              | Un **gestionnaire de session** garantit l’existence d’une **seule instance centrale** dans l’application pour suivre l’utilisateur actif, sécuriser les accès et gérer la connexion/déconnexion de façon contrôlée. |
| 🔄 État                | `Conception_Logiciels.PatronEtat`                   | Un **système de connexion réseau** modifie dynamiquement son comportement (affichage, actions disponibles) en fonction de son **état courant** : déconnecté, tentative de connexion, ou connecté avec succès. |

---


## 🗂️ Structure des dossiers

Chaque patron est un projet Visual Studio et comprend :
- Les **classes représentant les rôles du patron** (abstraits, concrets, interfaces)
- Un fichier `main.cpp` pour **démontrer le comportement à l'exécution**
- Un **diagramme de classes UML** (souvent généré avec *Enterprise Architect*)

📁 Exemple d'organisation :


