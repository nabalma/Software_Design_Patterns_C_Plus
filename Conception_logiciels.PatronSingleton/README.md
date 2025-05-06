# 🔒 Gestion de Session (C++ – Singleton Pattern)

Ce projet illustre l'utilisation du **patron de conception Singleton** appliqué à la gestion de session utilisateur.  
Il permet de garantir qu'**une seule session utilisateur** est active à tout moment dans le programme.

---

## 🧠 Objectif
Empêcher la création multiple d'objets Session.
Centraliser l'accès à l'utilisateur connecté dans tout le programme.
Fournir un mécanisme de connexion / déconnexion contrôlé.
Sécuriser les appels à l’instance.


## 🧩 Design Pattern utilisé
Élément	Rôle dans le Pattern Singleton
Session::_session	Instance statique unique
Session::createSession()	Point d'entrée unique pour instancier l'objet
Session::getSessionInstance()	Accès global à l’unique instance
Session::logout()	Destruction contrôlée de la session
Session (constructeur privé)	Empêche toute instanciation extérieure




## ⚙️ Fonctionnalités
✅ Création unique d'une session utilisateur
✅ Récupération globale de la session
✅ Affichage de l'utilisateur courant
✅ Protection contre les appels à une session inexistante
✅ Suppression explicite de la session (logout())


## 📌 Remarques
Le singleton est volontairement non thread-safe ici pour garder la simplicité.
Une amélioration future pourrait inclure :
Protection multi-thread avec std::mutex
Expiration automatique de session
Intégration à un système de login réel

## 🧠 Patron utilisé
🧱 Singleton (GoF Design Pattern)
Permet d'assurer une seule instance globale et contrôlée d'une classe donnée, ici Session.


## 📁 Arborescence du projet

```plaintext
SessionSingleton/
├── Session.h
├── Session.cpp
└── main.cpp


