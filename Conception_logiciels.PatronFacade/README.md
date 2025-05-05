# 🔐 Système de Sécurité d’un Bâtiment — C++ avec le Design Pattern Facade

Ce projet démontre l'implémentation d’un **système de sécurité simplifié** pour un bâtiment, en utilisant le **design pattern Facade** en C++. L’objectif est de fournir une interface unique pour activer rapidement plusieurs sous-systèmes de sécurité tels que les portes, alarmes et caméras.

## 🏗️ Architecture du projet

Le projet est organisé autour du design pattern **Facade**, qui permet de masquer la complexité de plusieurs sous-systèmes derrière une interface simple et cohérente.

- `SecuriteFacade` : classe centrale qui orchestre les différents sous-systèmes.
- `Portes` : gère le verrouillage et le déverrouillage des portes.
- `Alarme` : permet d’activer ou désactiver l’alarme du bâtiment.
- `CameraSurveillance` : déclenche l’enregistrement vidéo.

### 📊 Diagramme d'architecture



## 🚀 Fonctionnalités principales

- Activation centralisée du mode sécurité
- Verrouillage de toutes les portes
- Activation de l'alarme
- Déclenchement de l'enregistrement vidéo

## 🔧 Compilation & Exécution

## Prérequis

- Un compilateur C++ (g++, clang, etc.)
- Un environnement Unix/Linux ou Windows (via WSL, MinGW ou autre)

## Compilation

Assurez-vous que tous les fichiers `.cpp` et `.h` sont dans le même dossier. Puis, exécutez :

```bash
g++ main.cpp SecuriteFacade.cpp Portes.cpp Alarme.cpp CameraSurveillance.cpp -o securite

---

## 📂 Fichiers inclus

| Fichier                  | Description                                 |
|--------------------------|---------------------------------------------|
| `main.cpp`               | Point d’entrée de l’application             |
| `SecuriteFacade.cpp`     | Interface centralisée de gestion sécurité   |
| `Portes.cpp`             | Module de verrouillage des portes           |
| `Alarme.cpp`             | Module de gestion de l’alarme               |
| `CameraSurveillance.cpp` | Module de surveillance vidéo                |
| `*.h`                    | Fichiers d’en-tête correspondants à chaque module |

---

## 🧠 Concepts mis en œuvre

### ✅ Facade Design Pattern

Ce projet illustre l’usage du **Facade Design Pattern**, un des patrons de conception classiques les plus utilisés en ingénierie logicielle. Il vise à :

- Simplifier l’utilisation d’un système complexe
- Cacher la logique interne de plusieurs sous-systèmes
- Fournir un **point d’accès unique** (ici `SecuriteFacade`) à plusieurs modules

---

## 📸 Exemple de sortie console

Lors de l'exécution, le programme produit la sortie suivante :

