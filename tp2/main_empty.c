#include <math.h>
#include <stdio.h>


void exercice1(void) {
    printf("\n\nEXERCICE 1\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
    scanf("%d", &mon_entier);

    if (mon_entier > 0) {
        printf("Mon entier %d est strictement positif.", mon_entier);
    }
    else if (mon_entier < 0) {
        printf("Mon entier %d est strictement négatif.", mon_entier);
    }
    else {
        printf("Mon entier %d est nul.", mon_entier);
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int n;
    scanf("%d", &n);

    int somme = 0;

    int i = 0;
    while (i <= n){
        somme += i;
        i++;
    }
    printf("La somme de 0 à %d est (using while) : %d\n", n, somme);

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2_bis(void) {
    printf("\n\nEXERCICE 2 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int n;
    scanf("%d", &n);

    int somme = 0;
    for (int i = 0; i <= n; i++){
        somme += i;
    }
    printf("La somme de 0 à %d est (using for) : %d\n", n, somme);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int jour_de_la_semaine;
    scanf("%d", &jour_de_la_semaine);

    if (jour_de_la_semaine == 0){
        printf("Le jour de la semaine est lundi.\n");
    }
    else if (jour_de_la_semaine == 1){
        printf("Le jour de la semaine est mardi.\n");
    }
    else if (jour_de_la_semaine == 2){
        printf("Le jour de la semaine est mercredi.\n");
    }
    else if (jour_de_la_semaine == 3){
        printf("Le jour de la semaine est jeudi.\n");
    }
    else if (jour_de_la_semaine == 4){
        printf("Le jour de la semaine est vendredi.\n");
    }
    else if (jour_de_la_semaine == 5){
        printf("Le jour de la semaine est samedi.\n");
    }
    else if (jour_de_la_semaine == 6){
        printf("Le jour de la semaine est dimanche.\n");
    }
    else {
        printf("Le nombre doit être strictement entre 0 et 6!\n");
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3_bis(void) {
    printf("\n\nEXERCICE 3 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int jour_de_la_semaine;
    scanf("%d", &jour_de_la_semaine);

    switch(jour_de_la_semaine){
        case 0:
            printf("Le jour de la semaine est lundi.\n");
            break;
        case 1:
            printf("Le jour de la semaine est marid.\n");
            break;
        case 2:
            printf("Le jour de la semaine est mercredi.\n");
            break;
        case 3:
            printf("Le jour de la semaine est jeudi.\n");
            break;
        case 4:
            printf("Le jour de la semaine est vendredi.\n");
            break;
        case 5:
            printf("Le jour de la semaine est samedi.\n");
            break;
        case 6:
            printf("Le jour de la semaine est dimanche.\n");
            break;
        default:
            printf("Le nombre doit être strictement entre 0 et 6!\n");
            break;

    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int num[5];
    for (int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    int somme = 0;

    for (int i = 0; i < 5; i++){
        somme += num[i];
    }

    printf("La somme du tableau est : %d\n", somme);


    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4_bis(void) {
    printf("\n\nEXERCICE 4 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int num[5];
    for (int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int max = num[0];

    for (int i = 0; i < 5; i++){
        if (min > num[i]){
            min = num[i];
        }

        if (max < num[i]){
            max = num[i];
        }
    }

    printf("Le minimum élément du tableau est : %d\n", min);
    printf("Le maximum élément du tableau est : %d]\n", max);

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        float note;
    };


    struct Etudiant etudiant;

    for (int i = 0; i < sizeof(etudiant.prenom) / sizeof(char); i++){
        etudiant.prenom[i] = '\0';
    }

    printf("Entrez votre nom : ");
    scanf("%s", etudiant.prenom);

    printf("Entrez votre note : ");
    scanf("%f", &etudiant.note); 

    for (int i = 0; i < sizeof(etudiant.prenom) / sizeof(char); i++){
        printf("%c", etudiant.prenom[i]);
    }

    if (etudiant.note >= 4){
        printf(" a passé.");
    }
    else {
        printf(" a échoué.");
    }


    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_bis(void) {
    printf("\n\nEXERCICE 5 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        float note;
    };

    struct Etudiant etudiants[3];

    for (int j = 0; j < sizeof(etudiants) / sizeof(struct Etudiant); j++){
        
        for (int i = 0; i < sizeof(etudiants[i].prenom) / sizeof(char); i++){
            etudiants[j].prenom[i] = '\0';
        }

        printf("Entrez votre nom : ");
        scanf("%s", etudiants[j].prenom);

        printf("Entrez votre note : ");
        scanf("%f", &etudiants[j].note); 
    }

    for (int j = 0; j < sizeof(etudiants) / sizeof(struct Etudiant); j++){

        for (int i = 0; i < sizeof(etudiants[j].prenom) / sizeof(char); i++){
            printf("%c", etudiants[j].prenom[i]);
        }

        if (etudiants[j].note >= 4){
            printf(" a passé.\n");
        }
        else {
            printf(" a échoué.\n");
        }
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_ter(void) {
    printf("\n\nEXERCICE 5 TER\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        float note;
    };

    struct Etudiant etudiants[3];

    printf("Le nombres d'éléments dans le tableau d'étudiants est : %d", sizeof(etudiants) / sizeof(struct Etudiant));

    /******************** Votre code ci-dessus *********************/
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Passager {
        char prenom[30];
        int numero;
    };

    struct Vol {
        char depart[30];
        char destination[30];
        int duree;
        struct Passager passagers[3];
    };

    struct Vol vols[2];

    for (int j = 0; j < sizeof(vols) / sizeof(struct Vol); j++){
        
        for (int i = 0; i < sizeof(vols[j].depart) / sizeof(char); i++){
            vols[j].depart[i] = '\0';
        }

        for (int i = 0; i < sizeof(vols[j].depart) / sizeof(char); i++){
            vols[j].destination[i] = '\0';
        }

        printf("Entrez la départ du vol %d : ", j);
        scanf("%s", vols[j].depart);

        printf("Entrez la destination du vol %d : ", j);
        scanf("%s", vols[j].destination);
        
        printf("Entrez la durée du vol %d : ", j);
        scanf("%d", &vols[j].duree);

        printf("\n");
        printf("Entrez les passagers du vols %d ! ", j);
        printf("\n");

        for (int i = 0; i < sizeof(vols[j].passagers) / sizeof(struct Passager); i++){
            printf("Entrez le prénom du passager %d : ", i);
            scanf("%s", vols[j].passagers[i].prenom);
            printf("Entrez le numéro du passager %d : ", i);
            scanf("%d", &vols[j].passagers[i].numero);
        }
    }

    for (int j = 0; j < sizeof(vols) / sizeof(struct Vol); j++){

        printf("Vol numéro %d\n", j);

        printf("Départ du vol : %s\n", vols[j].depart);
        printf("Destination du vol : %s\n", vols[j].destination);
        printf("Durée du vol : %d\n", vols[j].duree);

        for (int i = 0; i < sizeof(vols[j].passagers) / sizeof(struct Passager); i++){
            printf("Passager numéro %d : %s\n", vols[j].passagers[i].numero, vols[j].passagers[i].prenom);
        }

    }
        

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");
    
    /******************** Votre code ci-dessous ********************/
    for (int i = 10; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf(" ");    
        }

        for (int j = 0; j < 2*(11-i)-1; j++){
            printf("*");
        }

        printf("\n"); 
    }

    for (int i = 10; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf(" ");    
        }

        for (int j = 0; j < 2*(11-i)-1; j++){
            printf("*");
        }

        printf("\n"); 
    }

    for (int i = 6; i > 0; i--){
        for (int j = 9; j > 0; j--){
            printf(" ");
        }

        for (int j = 0; j < 3; j++){
            printf("*");
        }
        
        printf("\n"); 
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7_bis(void) {
    printf("\n\nEXERCICE 7 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int lignes_triangle_sapin;
    int lignes_tronc;

    printf("Entrez le nombres de lignes du triangle du sapin : ");
    scanf("%d", &lignes_triangle_sapin);

    printf("Entrez le nombres de lignes du tronc : ");
    scanf("%d", &lignes_tronc);


    for (int i = lignes_triangle_sapin; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf(" ");    
        }

        for (int j = 0; j < 2*(lignes_triangle_sapin + 1 -i)-1; j++){
            printf("*");
        }

        printf("\n"); 
    }

    for (int i = lignes_triangle_sapin; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf(" ");    
        }

        for (int j = 0; j < 2*(lignes_triangle_sapin + 1-i)-1; j++){
            printf("*");
        }

        printf("\n"); 
    }

    for (int i = lignes_tronc; i > 0; i--){
        for (int j = lignes_triangle_sapin - 1; j > 0; j--){
            printf(" ");
        }

        for (int j = 0; j < 3; j++){
            printf("*");
        }
        
        printf("\n"); 
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {   

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !
    
    exercice1();
    exercice2();
    exercice2_bis();
    exercice3();
    exercice3_bis();
    exercice4();
    exercice4_bis();
    exercice5();
    exercice5_bis();
    exercice5_ter();
    exercice6();
    exercice7(); 
    exercice7_bis();

    return 0;
}
