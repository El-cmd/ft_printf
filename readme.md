# ft_printf

Ce projet consiste à recréer la fonction printf de la libc. Il s'agit d'un excellent exercice de programmation qui permet de découvrir les arguments variadiques en C et de renforcer les compétences en programmation.

## Description

`ft_printf` est une implémentation personnalisée de la fonction printf standard de C. Elle gère plusieurs spécificateurs de conversion :

- `%c` - Affiche un caractère
- `%s` - Affiche une chaîne de caractères
- `%p` - Affiche un pointeur en hexadécimal
- `%d` - Affiche un nombre décimal (base 10)
- `%i` - Affiche un entier en base 10
- `%u` - Affiche un nombre décimal non signé (base 10)
- `%x` - Affiche un nombre en hexadécimal (base 16) en minuscules
- `%X` - Affiche un nombre en hexadécimal (base 16) en majuscules
- `%%` - Affiche le caractère %

## Fonctions Principales

- `ft_printf` : Fonction principale qui gère le formatage et l'affichage
- `ft_putnbr_base` : Conversion et affichage des nombres dans différentes bases
- `ft_putnbr_base_p` : Gestion spéciale pour l'affichage des pointeurs
- `ft_putstr` : Affichage des chaînes de caractères
- `ft_putnbr` : Affichage des nombres décimaux

## Compilation

Le projet utilise un Makefile pour la compilation. Les commandes principales sont :

```bash
make        # Compile la bibliothèque
make clean  # Supprime les fichiers objets
make fclean # Supprime les fichiers objets et la bibliothèque
make re     # Recompile le projet
```

## Utilisation

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Nombre: %d\n", 42);
    ft_printf("Hexadécimal: %x\n", 255);
    return (0);
}
```

## Normes du Projet

Ce projet suit les normes de l'école 42, incluant :
- Fonctions de 25 lignes maximum
- Pas plus de 5 fonctions par fichier
- Déclaration des variables en début de fonction
- Une seule déclaration par ligne