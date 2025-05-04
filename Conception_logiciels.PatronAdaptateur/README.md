# 🔌💳 Adaptateur & Façade – Paiement Stripe (C++ Design Patterns)

Ce projet illustre l'utilisation combinée de deux **patrons de conception en C++** :

- 🧩 Le **patron Adaptateur** (*Adapter Pattern*) — pour intégrer une API tierce (`StripeAPI`) à une interface interne (`PasserellePaiement`), en deux variantes :
  - Version **classe** (héritage)
  - Version **objet** (composition)

- 🏛️ Le **patron Façade** peut être envisagé pour regrouper plusieurs adaptateurs de paiement sous une seule interface.

---

## 📁 Arborescence du projet

```plaintext
Adaptateur_Facade_Paiement/
├── main.cpp
├── PasserellePaiement.h / PasserellePaiement.cpp        # Interface cible
├── StripeAPI.h / StripeAPI.cpp                          # API externe (existante)
├── StripAPIAdapterVersionClass.h / .cpp                 # Adaptateur (version classe)
├── StripAPIAdapterVersionObjet.h / .cpp                 # Adaptateur (version objet)
```

---

## 🎯 Objectif du projet

Ce projet a pour objectif de **rendre compatible une API tierce (StripeAPI)** avec une interface standard utilisée par une application (`PasserellePaiement`).  
Il s’agit de démontrer :

- Comment **adapter une interface existante** à une nouvelle sans modifier son code
- Comment **séparer** l’implémentation réelle d’un service de son utilisation
- Comment **rendre modulaire** un système via les patrons de conception

---

## 🧩 Design Patterns utilisés

| Patron           | Rôle joué dans le projet                                                                 |
|------------------|------------------------------------------------------------------------------------------|
| **Adaptateur**   | Transforme l’interface de `StripeAPI` en celle de `PasserellePaiement`                  |
| **Façade**       | (Éventuel) pour centraliser l’accès à différents moyens de paiement                     |

---

## ⚙️ Fonctionnement

Deux adaptateurs sont créés pour intégrer `StripeAPI` :

### ✅ Version Classe
- Hérite de `StripeAPI` et `PasserellePaiement`
- Redéfinit `payerMontant()`
- Avantage : simplicité
- Inconvénient : rigidité (héritage multiple)

```cpp
void StripAPIAdapterVersionClass::payerMontant(double montant) {
    effectuerPaiement(montant, "CFA");
    std::cout << "Et reconverti en Passerelle Paiement";
}
```

---

### ✅ Version Objet
- Contient une instance de `StripeAPI`
- Implémente `PasserellePaiement`
- Avantage : plus souple, respecte le principe de composition

```cpp
void StripAPIAdapterVersionObjet::payerMontant(double montant) {
    stripeApi.effectuerPaiement(montant, "CFA");
    std::cout << "Augmentee de son adapation Passerelle Paiement";
}
```

---

## 🧪 Exemple d'exécution

Fichier `main.cpp` :

```cpp
int main() {
    PasserellePaiement* adaptateurClasse = new StripAPIAdapterVersionClass();
    adaptateurClasse->payerMontant(1500.0);

    PasserellePaiement* adaptateurObjet = new StripAPIAdapterVersionObjet();
    adaptateurObjet->payerMontant(2450.0);

    delete adaptateurClasse;
    delete adaptateurObjet;
    return 0;
}
```

📌 **Sortie console attendue** :

```
=== Test Adaptateur Version CLASSE ===
[Stripe] Paiement de 1500 CFA effectué.
Et reconverti en Passerelle Paiement

=== Test Adaptateur Version OBJET ===
[Stripe] Paiement de 2450 CFA effectué.
Augmentee de son adapation Passerelle Paiement
```

---

## 💡 Concepts clés démontrés

- ✔️ **Encapsulation** d’une API externe
- ✔️ **Interchangeabilité** des implémentations
- ✔️ **Héritage vs composition**
- ✔️ **Préparation à une architecture extensible**
- ✔️ **Bonne séparation des responsabilités**
- ✔️ Utilisation de **pointeurs polymorphes**

---

## 🔗 Suggestions d’amélioration

- Ajouter d’autres adaptateurs (`PaypalAdapter`, `CryptoAdapter`)
- Créer une **classe Façade** (`GestionnairePaiements`) qui choisit dynamiquement la passerelle
- Ajouter des **tests unitaires** pour vérifier les appels réels

---

## 🧠 Crédits

Projet pédagogique en C++ — démonstration des patrons **Adapter** (Classe & Objet)  
et **Façade** à des fins de **clarté architecturale** et de **réutilisabilité du code**.

Développé dans le cadre de l'apprentissage des design patterns.  
🎓 *Auteur : Ton Nom ici*
