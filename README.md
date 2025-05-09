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
| 🧠 Stratégie           | `Conception_Logiciels.PatronStrategie`              | Ce patron est utilisé dans un **robot autonome de nettoyage** capable de sélectionner la meilleure stratégie de déplacement (zigzag, spirale, bordure) en fonction du **type de sol** rencontré (tapis, carrelage, parquet). Cette capacité à **changer dynamiquement de comportement** permet d’optimiser le nettoyage sans réécrire la logique du robot. |
| 👁️ Observateur         | `Conception_Logiciels.PatronObservateur`            | Implémenté dans un **système collaboratif de modélisation de bâtiments**, ce patron permet à des **utilisateurs (architectes, ingénieurs)** d’être **automatiquement notifiés** lorsqu’un autre acteur crée ou modifie une règle de construction. Cela assure la **cohérence** et la **réactivité** du système face aux changements. |
| 🎨 Décorateur          | `Conception_Logiciels.PatronDecorateur`             | Dans un système de **réservation de vols aériens**, chaque billet de base peut être enrichi avec des **services supplémentaires** (bagages supplémentaires, repas spéciaux, accès prioritaire, assurance). Le patron Décorateur permet de **chaîner dynamiquement ces ajouts**, sans modifier la classe principale `Billet`. |
| 🧰 Méthode Template    | `Conception_Logiciels.PatronMethode`                | Ce patron est utilisé pour modéliser un **processus logistique de tournée de livraison**. Une structure générale de l’algorithme est définie (préparer tournée, charger, livrer, valider), tandis que les sous-classes spécifient le comportement selon les **zones urbaines, rurales ou internationales**. |
| 🏭 Fabrique            | `Conception_Logiciels.PatronFabrique`               | Dans un système de gestion d’utilisateurs, ce patron permet d’instancier **différents profils** (`Administrateur`, `Client`, `Employé`) via des **fabriques spécialisées**. Cela simplifie l’ajout de nouveaux types de profils et **masque la complexité d’instanciation** au reste du programme. |
| 🏨 Fabrique Abstraite  | `Conception_Logiciels.PatronFabriqueAbstraite`      | Ce patron est utilisé dans un **simulateur de réservation d’hôtel**. Il permet de créer des **formules complètes** selon la catégorie (`Standard`, `Confort`, `Luxe`) incluant chambre, services, restauration, WiFi, etc., tout en garantissant la **cohérence entre les éléments du même niveau de confort**. |
| 🧱 Composite           | `Conception_Logiciels.PatronComposite`              | Utilisé dans une **application musicale**, ce patron permet de manipuler de manière uniforme des objets simples (`Chanson`) et des objets composites (`Playlist`) pouvant eux-mêmes contenir d’autres playlists. Il permet une **gestion récursive** très souple du contenu musical. |
| 🔁 Itérateur           | `Conception_Logiciels.PatronIterateur`              | Implémenté dans un **système de gestion documentaire**, ce patron fournit un **accès uniforme** aux documents d’un dépôt, indépendamment de leur structure interne (vecteur, liste, arborescence), tout en respectant le **principe d'encapsulation**. |
| 📝 Commande            | `Conception_Logiciels.PatronCommande`               | Ce patron est utilisé dans un **bloc-notes numérique** pour gérer les actions utilisateur (`ajouter texte`, `annuler`, `répéter`). Chaque action est encapsulée dans un objet commande, ce qui permet de **maintenir un historique** des opérations et d'implémenter des fonctions d’**undo/redo**. |
| 🔌 Adaptateur          | `Conception_Logiciels.PatronAdaptateurFacade`       | Ce projet montre comment **intégrer une API de paiement tierce** (`StripeAPI`) dans une architecture existante à travers deux formes d’adaptateurs : l’un basé sur **l’héritage**, l’autre sur **la composition**. Cela facilite le remplacement futur de l’API sans modifier le code métier. |
| 🔒 Singleton           | `Conception_Logiciels.PatronSingleton`              | Un **gestionnaire de session utilisateur** repose sur ce patron pour s’assurer qu’il n’existe **qu’une seule instance partagée** de la classe `Session`. Elle permet de centraliser l’identification de l’utilisateur connecté, d'assurer la **sécurité des accès** et de **gérer explicitement la déconnexion**. |
| 🔄 État                | `Conception_Logiciels.PatronEtat`                   | Dans un système de **connexion réseau simulée**, l’objet `Connexion` change dynamiquement de comportement selon son **état courant** (`Déconnecté`, `Connexion en cours`, `Connecté`). Chaque état encapsule son comportement, évitant les blocs conditionnels et facilitant l’**extensibilité**. |



## 🗂️ Structure des dossiers

Chaque patron est un projet Visual Studio et comprend :
- Les **classes représentant les rôles du patron** (abstraits, concrets, interfaces)
- Un fichier `main.cpp` pour **démontrer le comportement à l'exécution**
- Un **diagramme de classes UML** (souvent généré avec *Enterprise Architect*)

📁 Exemple d'organisation :


