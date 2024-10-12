#include <stdio.h>


/****************************/
/* Vos fonctions ci-dessous */ 
/****************************/


// EXERCICE 1
float somme(float x, float y) {
    return x + y;
}

// EXERCICE 2
int puissance(int base, int exposant) {
    
    float resultat = 1;
    for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }

    return resultat;
}

// EXERCICE 4

int restreindre_intervalle_pure(int x, int min, int max) {
    /******************** Votre code ci-dessous ********************/
    if (x < min) {
        return min;
    }
    else if (x > max) {
        return max;
    }
    else {
        return x;
    }

    /******************** Votre code ci-dessus ********************/
}

void restreindre_intervalle_bord(int *x, int min, int max) {
    /******************** Votre code ci-dessous ********************/
    if (*x < min) {
        *x = min;
    }
    else if (*x > max){
        *x = max;
    }

    /******************** Votre code ci-dessus ********************/
}

// EXERCICE 5
void echange(int* x, int* y) {
    
    int c = *y;
    
    *y = *x;
    *x = c;
}

// EXERCICE 6
int factorielle(int n){
    if (n <= 0){
        return 1;
    }

    return n * factorielle(n-1);
}

int coefficient_binomial(int k, int n) {
    return (factorielle(n) / (factorielle(k) * factorielle(n-k)));
}

int factorielle_iteratif(int n){
    int resultat = 1;

    for (int i=1; i <= n; i++) {
        resultat *= i;            
    }

    return resultat;
}

// EXERCICE 7

void afficher_instruction_hanoi(char nom_tour_1, char nom_tour_2) {
    printf("Prendre le disque sur la tour %c et le déposer sur la tour %c ", nom_tour_1, nom_tour_2);
    printf(" (appuyer sur n'importe quelle touche pour continuer)\n");
    getchar();
}

void hanoi_idiot(int nb_disques, char nom_tour_depart, char nom_tour_arrivee, char nom_tour_auxiliaire) {
    
    switch (nb_disques) {
        case 1:
            afficher_instruction_hanoi(nom_tour_depart, nom_tour_arrivee);
            break;
        
        case 2:
            afficher_instruction_hanoi(nom_tour_depart, nom_tour_auxiliaire);
            afficher_instruction_hanoi(nom_tour_depart, nom_tour_arrivee);
            afficher_instruction_hanoi(nom_tour_auxiliaire, nom_tour_arrivee);
            break;

        default:
            printf("Je ne sais pas comment faire avec %d disques.\n", nb_disques);
            break;
    }

    return;
}

void hanoi(int nb_disques, char nom_tour_depart, char nom_tour_arrivee, char nom_tour_auxiliaire) {
    
    if (nb_disques < 1) {
        printf("Le nombre de disques ne peut pas être inférieur à 1.\n");
        return;
    }

    // TODO : commenter (ou supprimer) la ligne suivante
    //hanoi_idiot(nb_disques, nom_tour_depart, nom_tour_arrivee, nom_tour_auxiliaire);

    /******************** Votre code ci-dessous ********************/
    if (nb_disques == 1) {
        afficher_instruction_hanoi(nom_tour_depart, nom_tour_arrivee);
    }
    else {
        hanoi(nb_disques - 1, nom_tour_depart, nom_tour_auxiliaire, nom_tour_arrivee);
        afficher_instruction_hanoi(nom_tour_depart, nom_tour_arrivee);
        hanoi(nb_disques -1, nom_tour_auxiliaire, nom_tour_arrivee, nom_tour_depart);
    }
    /******************** Votre code ci-dessus *********************/
}

// EXERCICE 8
float valeur_absolue(float a) {
    if (a < 0) {
        return -a;
    }
    else {
        return a;
    }
}

float initialiser_heron(float a) {
    float x = 0;
    while (x*x <= a) {
        x++;
    }

    return x - 1;
}

float racine_heron(float a, float precision) {
    float x = initialiser_heron(a);

    while (valeur_absolue(x*x - a) > precision) {
        x = (x + (a/x)) / 2;
    }

    return x;
}

// EXERCICE 9 
float approximer_pi(int nombre_points_par_axes)  {

    float dx = 1 / (float) nombre_points_par_axes; // Length / #points = seperation per point
    float dy = 1 / (float) nombre_points_par_axes;

    int points_dans_cercles = 0;
    int points_en_tout = 0;

    for (float x = 0.0; x <= 1.0; x+=dx) {
        for (float y = 0.0; y <= 1.0; y+=dy) {

            if ((x-0.5)*(x-0.5) + (y-0.5)*(y-0.5) <= 0.25) {
                points_dans_cercles++;
            }

            points_en_tout++;
        }
    }

    return 4 * (float) points_dans_cercles / (float) points_en_tout;
}

/****************************/
/* Vos fonctions ci-dessus **/
/****************************/


void exercice1(void) {
    printf("\n\nEXERCICE 1\n\n");
    
    float a, b, c;
    
    printf("Entrer deux nombres à additioner : ");
    scanf("%f %f", &a, &b);
    
    // TODO : Décommenter la ligne suivante une fois que la fonction somme est implémentée
    c = somme(a, b); 
    
    printf("%f + %f = %f\n", a, b, c);

    return;
}


void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");

    int nombre, exposant, resultat;

    printf("Entrer un nombre et un exposant (entiers) : ");
    scanf("%d %d", &nombre, &exposant); 

    /******************** Votre code ci-dessous ********************/
    resultat = puissance(nombre, exposant);
    /******************** Votre code ci-dessus *********************/

    printf("%d^%d = %d\n", nombre, exposant, resultat);

    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    int a = 10;
    printf("a = %d (adresse : %p) \n", a, &a);
    
    /******************** Votre code ci-dessous ********************/
    int* p1;
    int* p2;

    printf("a = %d (adresse : %p) \n", a, &a);
    p1 = &a;
    printf("a = %d (adresse : %p) \n", a, &a);
    *p1 = *p1 - 3;
    printf("a = %d (adresse : %p) \n", a, &a);
    p2 = p1;
    printf("a = %d (adresse : %p) \n", a, &a);
    *p2 = *p2 * 6;
    printf("a = %d (adresse : %p) \n", a, &a);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");
    
    int x, min, max;
    
    printf("Entrer deux nombres entiers (intervalle [min, max]) : ");
    scanf("%d %d", &min, &max);
    
    printf("Entrer un nombre entier en dehors de cet intervalle : ");
    scanf("%d", &x);

    // Restriction à l'intervalle avec la version pure 
    int x_restreint = restreindre_intervalle_pure(x, min, max);
    printf("Après l'appel de la fonction pure, on a bien x_restreint = %d et x = %d (inchangée) \n", x_restreint, x);

    // Restriction à l'intervalle avec la version à effet de bord 
    restreindre_intervalle_bord(&x, min, max);
    printf("Après l'appel de la fonction à effet de bord, la variable x elle-même est changée et on a maintenant x = %d \n", x);

    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");

    int a, b;
    printf("Entrer deux nombres (a et b): ");
    scanf("%d %d", &a, &b);

    printf("Avant l'échange, a = %d et b = %d \n", a, b);
    
    /******************** Votre code ci-dessous ********************/
    echange(&a,&b);
    /******************** Votre code ci-dessus *********************/

    printf("Après l'échange, a = %d et b = %d \n", a, b);
    
    return;
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");
    
    int k, n, fact_k, fact_n, k_parmi_n;
    
    printf("k = ");
    scanf("%d", &k);

    printf("n = ");
    scanf("%d", &n);

    /******************** Votre code ci-dessous ********************/
    fact_k = factorielle(k);
    fact_n = factorielle(n);

    k_parmi_n = coefficient_binomial(k, n);

    /******************** Votre code ci-dessus *********************/

    printf("%d! = %d\n", k, fact_k);
    printf("%d! = %d\n", n, fact_n);
    printf("%d parmi %d = %d\n", k, n, k_parmi_n);

    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");

    printf("\n*** Tours de Hanoi ***\n\n");
    printf("Par ici pour jouer : https://www.mathsisfun.com/games/towerofhanoi.html\n\n");

    int nb_disques;
    printf("Avec combien de disques voulez-vous jouer ? ");
    scanf("%d", &nb_disques);
    getchar();  // Cette ligne permet d'attendre que l'utilisateur appuie sur une touche

    hanoi(nb_disques, '1', '3', '2');

    return;
}


void exercice8(void) {
    printf("\n\nEXERCICE 8\n\n");
    
    float a, x, precision;
    printf("*** Méthode de Héron ***\n\n");
    printf("Entrer le nombre dont vous voulez calculer la racine carrée : ");
    scanf("%f", &a);
    printf("Entrer la précision souhaitée : ");
    scanf("%f", &precision);
    
    // TODO : Décommenter la ligne suivante une fois que la fonction ,'racine_heron' est implémentée
    x = racine_heron(a, precision);

    printf("Racine carrée de %f = %f\n", a, x);

    return;
}


void exercice9(void) {
    printf("\n\nEXERCICE 9\n\n");
    
    printf("Approximation de PI\n\n");
    
    int nb_points_par_axe;
    printf("Entrer le nombre de points à utiliser par axe --- /!\\ au delà des 10 000 points par axe (100 millions de points au total) le calcul commence à être vraiment long !! : ");
    scanf("%d", &nb_points_par_axe);

    /******************** Votre code ci-dessous ********************/
    printf("Pi = %f\n", approximer_pi(nb_points_par_axe));
    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !

    //exercice1();
    //exercice2();
    //exercice3();
    //exercice4();
    //exercice5();
    //exercice6();
    //exercice7();
    //exercice8();
    exercice9();
    
    return 0;
}
