# 🔄 Gestion d’État d’une Connexion (C++ – Patron État)

Ce projet illustre l'utilisation du **patron de conception État** (*State Pattern*) en C++.  
Il simule un système de connexion réseau avec transitions entre différents états (déconnecté, en cours, connecté), tout en encapsulant le comportement associé à chaque état.

---

## 🎯 Objectif

- Simuler un **cycle de connexion** réaliste.
- Appliquer le **patron État** pour **déléguer dynamiquement le comportement** selon l'état courant.
- Garantir un code **modulaire et extensible**, sans conditions `if` ou `switch` dispersées.

---

## 🧩 Design Pattern utilisé : State

| Élément         | Rôle dans le pattern                         |
|-----------------|----------------------------------------------|
| `EtatAbstrait`  | Interface commune pour tous les états        |
| `EtatDeconnecte`| État initial – aucune connexion active       |
| `EtatEnCoursDeConnexion` | État intermédiaire de tentative de connexion |
| `EtatConnecte`  | État final indiquant une connexion réussie   |
| `Connexion`     | Contexte qui change de comportement dynamiquement en fonction de son état actuel |

---

## ⚙️ Fonctionnalités

✅ Transition fluide entre les états  
✅ Comportements personnalisés pour chaque état  
✅ Messages d’erreurs appropriés selon l’état actuel  
✅ Encapsulation totale de la logique de transition

---

## 📂 Arborescence du projet

