# 🏭 Factory Method – Générateur de Profils Utilisateur (C++)

Ce projet illustre l’application du **patron de conception Factory Method** dans un contexte professionnel : la **création dynamique de profils utilisateur** selon leur rôle dans une application SaaS.

🔗 **Repo GitHub** :  
[➡️ Voir le code sur GitHub](https://github.com/nabalma/Software_Design_Patterns_C_Plus/tree/main/Conception_logiciels.PatronFabrique)

---

## 🎯 Objectif

Dans une application à rôles multiples (Admin, Client, Employé), chaque profil utilisateur possède :
- Un comportement personnalisé
- Un accès à des fonctionnalités différentes
- Un affichage ou traitement spécifique

👉 Le système doit pouvoir **créer dynamiquement le bon profil**, **sans connaître sa classe concrète**.

---

## 🧠 Patron utilisé : Factory Method

Ce patron permet de déléguer l’instanciation d’un objet à une **fabrique spécifique**, ce qui facilite l’extension et l’isolation du code.

### ✔️ Variante utilisée

✅ **Une classe de fabrique par type de profil**  
→ `GenerateurAdmin`, `GenerateurClient`, etc. héritent tous de `GenerateurDeProfilsAbstrait`.

---

## ✅ Avantages du patron Factory Method
- 🔒 Encapsulation : le code client ne connaît jamais les classes concrètes
- ➕ Ouvert à l’extension : ajouter un nouveau type de profil ne casse pas le code existant
- 🧼 Responsabilités séparées : chaque générateur gère la création de son propre type

---

## 🔄 Possibilités d’extension
Ajout d’autres profils (ex : ProfilPartenaire, ProfilInvité)
Intégration avec une base de données ou une interface utilisateur
Version avec une fabrique centralisée + paramètre (pour comparaison)

---

## 📜 Auteur
👤 Ousseynou Nabalma
🔗 GitHub - Software_Design_Patterns_C_Plus

---

🧠 "Le bon objet, au bon moment, sans dépendance directe."
C’est toute la force du Factory Method.
