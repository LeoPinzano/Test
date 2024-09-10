# Gestion des Missions d'Entreprise

## Description

Ce projet C++ permet de modéliser les missions au sein d'une entreprise. Il repose sur deux classes principales : `Entreprise` et `Mission`. Chaque mission est associée à une entreprise et contient des informations sur le nombre de personnes assignées, une description, le nombre d'heures nécessaires, et l'entreprise liée à la mission.

## Fonctionnalités

- **Classe `Entreprise`** :
  - Représente une entreprise avec deux attributs : le nom et la ville.
  - Permet de créer des objets entreprise via un constructeur par défaut ou avec paramètres.
  - Inclut un destructeur, un constructeur de copie, et un opérateur d'affectation.
  - Possède des accesseurs et mutateurs pour modifier et consulter les attributs `nomEntreprise` et `villeEntreprise`.

- **Classe `Mission`** :
  - Représente une mission avec plusieurs attributs : nombre de personnes assignées, descriptif de la mission, nombre d'heures nécessaires, et l'entreprise associée.
  - Constructeurs (par défaut et avec paramètres), destructeur, constructeur de copie, et opérateur d'affectation.
  - Getters et setters pour les attributs `nbPersonne`, `descriptifMission`, `nbHeure`, et `entrepriseMission`.

## Installation et Compilation

### Prérequis

Assurez-vous d'avoir un compilateur C++ compatible avec C++11 ou supérieur.

### Étapes

1. Clonez ce dépôt sur votre machine locale :
    ```bash
    git clone https://github.com/votre-utilisateur/votre-repo.git
    ```

2. Compilez les fichiers sources avec g++ :
    ```bash
    g++ -o gestion_mission Main.cpp Mission.cpp Entreprise.cpp
    ```

3. Exécutez le programme :
    ```bash
    ./gestion_mission
    ```

## Utilisation

Le programme permet de tester les différentes fonctionnalités des classes `Entreprise` et `Mission`. Après compilation et exécution, vous verrez des exemples de création, de modification, et de copie d'objets `Entreprise` et `Mission`. Voici un extrait des sorties possibles :

```
Entreprise par défaut : anonyme, inconnu
Entreprise avec paramètres : TechCorp, Paris
Entreprise modifiée : InnoTech, Lyon

===== Test de la classe Mission =====
Mission par défaut : 0 personnes, , 0 heures, Entreprise : anonyme, inconnu
Mission avec paramètres : 5 personnes, Développer un logiciel, 120 heures, Entreprise : InnoTech, Lyon
...
```

## Structure du projet

Le projet contient les fichiers suivants :

- **`Entreprise.h`** : Déclaration de la classe `Entreprise`.
- **`Entreprise.cpp`** : Implémentation de la classe `Entreprise`.
- **`Mission.h`** : Déclaration de la classe `Mission`.
- **`Mission.cpp`** : Implémentation de la classe `Mission`.
- **`Main.cpp`** : Programme principal pour tester les classes.

## Contributeurs

- **Pierre** : Développeur de la classe `Entreprise`.
- **Léo** : Développeur de la classe `Mission`.

## License

Ce projet est sous licence MIT. Vous pouvez consulter le fichier `LICENSE` pour plus de détails.

