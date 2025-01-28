#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define maxlength 16

//On importe des librairies gérant des fonctions comme strlen, strcspn, isdigit...
//On restreint le nombre de caractères pour le mot de passe


//Fonction principale qui évolue la force du mot de passe
/* On vérifie et quantifie la présence de minuscules, de majuscules, de chiffres
de caractères spéciaux */
const char* evaluate_password(const char* password)
{
  int length = strlen(password);
  int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
  for (int i = 0; i < length; i++) {
        if (islower(password[i])) has_lower = 1;
        else if (isupper(password[i])) has_upper = 1;
        else if (isdigit(password[i])) has_digit = 1;       
}


//Evaluation de la force du mot de passe, on compte 6 niveaux
 if (length < 4) {}
