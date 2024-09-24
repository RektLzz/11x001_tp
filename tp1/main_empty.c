#include <math.h>
#include <stdio.h>


void exercice1(void){
    printf("\n\nEXERCICE 1\n\n");
    
    printf("Bonjour monde !\n");
    
    return;
}


void exercice2(void){
    printf("\n\nEXERCICE 2\n\n");
    
    /******************** Votre code ci-dessous ********************/
    printf("Nom     : Matthew O'DONNELL\n");
    printf("Né le   : 28.05.2004\n");
    printf("Contact : MatthewOdonnell@etu.unige.ch\n");
    /******************** Votre code ci-dessus *********************/
    
    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    /******************** Votre code ci-dessous ********************/
    printf("#           #\n");
    printf("# #       # #\n");
    printf("#  #     #  #\n");
    printf("#   #   #   #\n");
    printf("#    # #    #\n");
    printf("#     #     #\n");

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");

    /******************** Votre code ci-dessous ********************/
    char u = 'U', n = 'N', i = 'I', g = 'G', e = 'E';

    // À l'endroit
    printf("%c%c%c%c%c\n", u, n, i, g, e);

    // À l'envers
    printf("%c%c%c%c%c\n", e, g, i, n, u);

    /******************** Votre code ci-dessus *********************/
    
    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");

    const float PI = 3.1415926535;

    // Lecture du rayon
    float radius;
    printf("Entrer le rayon du cercle (en m) : ");
    scanf("%f", &radius);

    /******************** Votre code ci-dessous ********************/
    printf("Le périmètre du cercle est : 2 x PI x %f = %f\n", radius, 2 * PI * radius);
    printf("L'aire du cercle est : PI x %f^2 = %f\n", radius, PI * radius * radius);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");

    // Lecture de la date de naissance
    int birth_year, birth_month, birth_day;
    printf("Entrer votre date de naissance (format dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);

    // Lecture de la date du jour
    int today_year, today_month, today_day;
    printf("Entrer la date d'aujourd'hui (format dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &today_day, &today_month, &today_year);

    // Affiche les dates entrées par l'utilisateur
    printf("Je suis né.e le %d/%d/%d.\n", birth_day, birth_month, birth_year);
    printf("Aujourd'hui, nous sommes le %d/%d/%d.\n\n", today_day, today_month, today_year);    

    int age_in_day = 0;

    /******************** Votre code ci-dessous ********************/
    int day_difference = today_day - birth_day;
    int month_difference = today_month - birth_month;
    int year_difference = today_year - birth_year;
    
    age_in_day = day_difference + 30 * month_difference + 12 * 30 * year_difference;

    /******************** Votre code ci-dessus *********************/

    printf("==> Mon âge est (approximativement) de %d jours.\n", age_in_day);
    
    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");

    // Lecture du nombre de jours
    int nb_of_days;
    printf("Entrer un nombre de jours à convertir : ");
    scanf("%d", &nb_of_days);
   
    /******************** Votre code ci-dessous ********************/
    int annee = nb_of_days / 365;
    int jours_sans_les_annees = nb_of_days - (annee * 365);
    int semaine = jours_sans_les_annees / 7;
    int jour = jours_sans_les_annees % 7;

    printf("\n%d jours font %d année(s), %d semaine(s) et %d jour(s).\n", nb_of_days, annee, semaine, jour);

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice8(void) {
    printf("\n\nEXERCICE 8\n\n");

    int a = 7, b = 2;
    float c, d;  
    
    /******************** Votre code ci-dessous ********************/

    c = a / (float) b;

    /******************** Votre code ci-dessus *********************/
    
    printf("%d / %d = %f \n", a, b, c);

    return;
}


void exercice9(void) {
    printf("\n\nEXERCICE 9\n\n");
    
    /**************************************************************/
    /********* Exemple d'overflow du type 'unsigned char' *********/
    /**************************************************************/

    unsigned char a, b, c;

    // Vérifions qu'un 'unsigned char' occupe bien 8 bits
    int size_of_unsigned_char = sizeof(a);
    printf("Le type 'unsigned char' utilise %d octets, c'est-à-dire %d bits.\n", size_of_unsigned_char, 8 * size_of_unsigned_char);

    // Exemple d'overflow
    a = 61;
    b = 213;
    c = a + b;  // Overflow : c ne vaut pas 61 + 213 = 274 mais 274 % 256 = 18
    printf("%d + %d = %d\n", a, b, c);
    
    /*************************************/
    /********* Fin de l'exemple *********/
    /*************************************/


    /******************** Votre code ci-dessous ********************/
    int d, e, f;

    // Vérifions le stockage utilisé par les 'int'
    int size_of_int = sizeof(d);
    printf("Le type 'int' utilise %d octets, c'est-à-dire %d bits.\n", size_of_int, 8 * size_of_int);

    /*  On remarque que le type int utilise 32 bits et donc à 2^32 valeurs possibles où puisque celui-ci accepte
        les valeurs négatives, c'est de (-2^31) à (2^31 - 1). Pour créer un overflow, il suffit de faire :
        (2^31 - 1) + 1 = 2^31 => -2^31 (car overflow le 1 et donc tous les bits sont des 0)
    */ 

    // Exemple d'overflow
    d = 1; // 1
    e = 2147483647; // 2^31 - 1
    f = e + d; // 2^31 - 1 + 1 = 2^31 => -2^31
    // En convertissant utilisant le complèment à deux, on obtient

    printf("%d + %d = %d\n", d, e, f);

    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {   

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !

    exercice1();
    exercice2();
    exercice3();
    exercice4();
    exercice5();    
    exercice6();
    exercice7();
    exercice8();
    exercice9();

    return 0;
}
