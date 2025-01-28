#include <stdio.h>

//Fonction principale et déclaration des variables
//Ne pas se tromper dans les unités
int main()
{
    float poids, taille, imc;

    // Saisie du poids en kg 
    printf("Quel est votre poids en kilogrammes : ");
    scanf("%f", &poids);
    //Saisie de la taille en m
    printf("Quelle est votre taille en mètres : ");
    scanf("%f", &taille);
    // On calcule l'IMC avant de l'interpeter puis on l'affiche
    imc = poids / (taille * taille);
    printf("Votre IMC est : %.2f\n", imc);

    // Affichage des résultats et de leurs interpretations
    //On classe selon les catégories 
    if (imc < 18.5) {
        printf("Catégorie : Maigreur\n");
        printf("Augmenter le nombre de kcal par jour, par exemple en augmentation les bons lipides et les bons oses.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Catégorie : Poids normal");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Catégorie : Surpoids\n");
        printf("Réduire le nombre de kcal consommées par jour et ou faîtes du sport.\n");
    } else {
        printf("Catégorie : Obésité et Obésite Morbide\n");
        printf("Revoir toute son alimentation, ne pas grignoter, faire du sport afin de dépenser des kcal, manger moins de lipides et de glucides \n");
    }

    return 0; // Fin du programme  
}
