# 🔐 Politique de Confidentialité – GPT Project Readme Injector

## 1. Utilisation des données

Ce GPT personnalisé est conçu pour **créer, mettre à jour ou supprimer des fichiers (`README.md`, `Notes.md`, etc.) dans vos dépôts GitHub** à l'aide de l'API officielle GitHub REST.

## 2. Authentification GitHub

L'accès à vos dépôts GitHub se fait **exclusivement via un token personnel (fine-grained token)** que vous fournissez vous-même.

- ✅ Ce token est **utilisé uniquement** pour effectuer les actions que vous demandez.
- ❌ Le GPT **ne stocke pas**, **ne sauvegarde pas**, et **ne partage jamais** ce token.
- ✅ Toutes les requêtes sont faites en temps réel, sans conservation de données.

## 3. Sécurité

Les actions sur GitHub sont limitées :
- À votre propre compte et vos propres dépôts
- Aux permissions que vous avez accordées dans votre token GitHub (ex: `contents: read and write`)

## 4. Confidentialité

- 🛡️ Aucun contenu envoyé par l’utilisateur n’est partagé avec des tiers.
- 🔒 Les réponses du GPT sont générées localement et ne sont pas enregistrées.

## 5. Responsabilité

Vous restez **entièrement responsable** des tokens que vous fournissez et des actions effectuées sur vos dépôts GitHub via ce GPT.

---
