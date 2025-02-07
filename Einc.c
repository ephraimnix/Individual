#include <stdio.h>
#include <stdlib.h>
//Permet d'utiliser des pointeurs de fichiers


/* DEMANDER A L'UTILISATEUR OU CREER LE FICHIER 
EN INDIQUANT LE REGISTRE DE DESTINATION */

//On choisit la taille de notre fichier à remplir
//Idée d'amélioration, on pourra demander une saisie
//Ici le fichier fera 3 Mo
#define CIBLE (3 * 1024 * 1024)

//Création de la fonction principale
//On utilise également un pointeur de fichier pour créer le fichier à remplir
int main()
{
  FILE*binary;
  binary=fopen("test.txt", "w");

//Une fois le fichier crée, on le remplit en binaire jusqu'à atteindre un poids désiré en partant d'un poids numérique nul
long debut = 0;
char remplissage;

//On crée notre boucle de remplissage
//On choisit d'alterner entre 0 et 1 mais on peut mettre tous les caractères desirés et ce sans les alterner
while(debut<CIBLE)
{
remplissage = (debut%2==0)?'0':'1';

//Ecriture dans le fichier test
// On implémente la variable debut tant qu'elle ne satisfait pas la boucle
fputc(debut, CIBLE);
        debut++;
}

//On éteint le .txt
    fclose(CIBLE);
    printf("Ok");

//Fin du programme
//Fin de la fonction
    return 0;
}
