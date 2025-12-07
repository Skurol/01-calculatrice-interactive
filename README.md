# Calculatrice Interactive

Calculatrice en ligne de commande développée en C avec menu interactif et gestion complète des erreurs.

## Fonctionnalités

-  Quatre opérations arithmétiques : Addition, Soustraction, Multiplication, Division
-  Support des nombres entiers et décimaux (float)
-  Validation automatique des entrées utilisateur
-  Gestion intelligente de la division par zéro
-  Menu interactif avec boucle continue
-  Messages d'erreur clairs et guidage utilisateur

## Installation et utilisation

### Prérequis
- Compilateur C (GCC recommandé)
- Terminal / Invite de commande

### Compilation
```bash
gcc main.c -o calculatrice
```

### Exécution

**Linux/Mac :**
```bash
./calculatrice
```

**Windows :**
```bash
calculatrice.exe
```

##  Exemple d'utilisation
```
=== CALCULATRICE ===
1. Addition
2. Soustraction
3. Multiplication
4. Division
5. Quitter

Entre le numero de l'operation de ton choix : 1
On est donc dans les additions
Tu vas entrer 2 nombres et ils seront additionnes
Entre ton premier nombre : 10.5
Parfait tu peux rentrer ton deuxieme nombre : 2.3
Impeccable, laisse moi calculer maintenant...
Le resultat de ton addition est de 12.80
```

##  Compétences techniques démontrées

- **Variables** : Utilisation de types `int` et `float`
- **Structures de contrôle** : `if/else`, `while`, validation conditionnelle
- **Fonctions** : Création et appel de fonctions personnalisées
- **Gestion d'erreurs** : Validation des entrées et cas limites
- **Interface utilisateur** : Menu interactif en ligne de commande
- **Boucles** : Gestion de flux de programme avec boucles imbriquées

## 🔧 Architecture du code
```
main.c
├── menu()          → Affichage et validation du choix
├── main()          → Boucle principale et traitement des opérations
└── Gestion d'erreurs spécifique par opération
```

##  Améliorations futures

- [ ] Ajout d'opérations avancées (puissance, racine carrée, modulo)
- [ ] Historique des calculs
- [ ] Export des résultats dans un fichier
- [ ] Mode calculatrice scientifique
- [ ] Interface colorée avec ANSI codes

##  Contexte d'apprentissage

Ce projet a été développé dans le cadre de mon apprentissage du langage C. Il représente ma maîtrise des concepts fondamentaux de la programmation procédurale.

---

**Projet #1** · Décembre 2025 · Langage C
