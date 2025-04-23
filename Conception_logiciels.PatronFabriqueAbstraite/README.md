# 🏨 Patron Fabrique Abstraite – Formules Hôtelières (C++)

Et si les formules hôtelières étaient conçues comme des architectures logicielles modulaires ?

Ce projet en **C++** illustre l’application du **patron de conception Fabrique Abstraite**, dans un contexte métier concret : la gestion de **formules de séjour packagées** dans le secteur hôtelier.

---

## 📍 Contexte métier

Un hôtel propose plusieurs types de **formules**, chacune regroupant des services cohérents selon le niveau de confort :

- 🛏️ Chambre  
- 🍽️ Restauration  
- 🧖 Bien-être  
- 🛎️ Service client

### Formules disponibles

- `Formule Standard`  
- `Formule Confort`  
- `Formule Luxe`

Chaque formule fournit une famille complète de services conçus pour offrir une expérience cohérente.

---

## 🧠 Architecture logicielle – Fabrique Abstraite

Chaque formule est modélisée par une **fabrique concrète**, capable de créer une **famille de services compatibles**.

### Pourquoi utiliser ce patron ?

- ✅ Centralisation de la configuration des packages  
- ✅ Garantie de cohérence entre les composants  
- ✅ Extension facile du système (ajout de nouvelles formules)  
- ✅ Forte séparation des responsabilités

---

## 📦 Extrait de configuration des formules

| Type de service      | Formule Standard             | Formule Confort                      | Formule Luxe                                 |
|----------------------|------------------------------|---------------------------------------|-----------------------------------------------|
| **Chambre**          | Chambre Classique            | Chambre Confort Vue Parc             | Suite Prestige Vue Mer                        |
| **Restauration**     | Petit-déjeuner buffet        | Demi-pension au restaurant           | Pension complète gastronomique                |
| **Bien-être**        | Salle de sport               | Spa & Détente                        | Spa + Massage + Espace bien-être privé        |
| **Service client**   | Réception standard           | Check-in rapide + bagagerie          | Concierge privé + Voiturier + VIP Check-in    |

Chaque colonne est générée par une fabrique concrète de type `PackageFactory`.

---



## Pour aller plus loin
🏗️ Factory Method → Créer chaque service individuellement
🧱 Builder → Composer dynamiquement des formules personnalisées
🎨 Décorateur → Ajouter des options dynamiques aux services (ex : surclassement)

## Ressources
✅ Diagramme UML disponible
✅ Explication complète sur LinkedIn

## Dépôt GitHub :
👉 Voir le projet ici
https://github.com/nabalma/Software_Design_Patterns_C_Plus/tree/main/Conception_logiciels.PatronFabriqueAbstraite


