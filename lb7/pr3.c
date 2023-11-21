 #include <stdio.h>
 /*Sa se scrie un program in care se aloca dinamic o matrice 
 in care sa se memoreze temperaturile 
masurate din ora in ora ( se vor memora cate 24 de valori 
pentru fiecare zi) pe parcursul unei 
luni. Sa se afiseze valorile maxima si minima, impreuna 
cu ora si ziua in care s-au inregistrat, 
precum si temperaturile medii din fiecare zi*/
 #include <stdio.h>
#include <stdlib.h>

#define ZILE_LUNA 30
#define ORE_ZI 24

// Prototipuri pentru functiile auxiliare
void citesteTemperaturi(int **matrice, int zile, int ore);
void afiseazaRezultate(int **matrice, int zile, int ore);

int main() {
    // Alocam dinamic matricea pentru temperaturi
    int **temperaturi = (int **)malloc(ZILE_LUNA * sizeof(int *));
    for (int i = 0; i < ZILE_LUNA; i++) {
        temperaturi[i] = (int *)malloc(ORE_ZI * sizeof(int));
    }

    // Citim temperaturile pentru fiecare zi
    citesteTemperaturi(temperaturi, ZILE_LUNA, ORE_ZI);

    // Afisam rezultatele
    afiseazaRezultate(temperaturi, ZILE_LUNA, ORE_ZI);

    // Eliberam memoria alocata dinamic
    for (int i = 0; i < ZILE_LUNA; i++) {
        free(temperaturi[i]);
    }
    free(temperaturi);

    return 0;
}

// Functie pentru citirea temperaturilor pentru fiecare zi
void citesteTemperaturi(int **matrice, int zile, int ore) {
    printf("Introduceti temperaturile pentru fiecare zi:\n");

    for (int i = 0; i < zile; i++) {
        printf("Ziua %d:\n", i + 1);
        for (int j = 0; j < ore; j++) {
            printf("Temperatura pentru ora %d: ", j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

// Functie pentru afisarea rezultatelor
void afiseazaRezultate(int **matrice, int zile, int ore) {
    int temperaturaMaxima, temperaturaMinima;
    float temperaturaMedie, sumaTemperaturi;

    printf("\nRezultate:\n");

    for (int i = 0; i < zile; i++) {
        temperaturaMaxima = matrice[i][0];
        temperaturaMinima = matrice[i][0];
        sumaTemperaturi = 0;

        // Calculam valorile pentru fiecare zi
        for (int j = 0; j < ore; j++) {
            sumaTemperaturi += matrice[i][j];

            if (matrice[i][j] > temperaturaMaxima) {
                temperaturaMaxima = matrice[i][j];
            }

            if (matrice[i][j] < temperaturaMinima) {
                temperaturaMinima = matrice[i][j];
            }
        }

        temperaturaMedie = sumaTemperaturi / ore;

        // Afisam rezultatele pentru fiecare zi
        printf("Ziua %d: Maxima=%d (ora %d), Minima=%d (ora %d), Medie=%.2f\n",
               i + 1, temperaturaMaxima, (temperaturaMaxima == matrice[i][0]) ? 1 : j + 1,
               temperaturaMinima, (temperaturaMinima == matrice[i][0]) ? 1 : j + 1, temperaturaMedie);
    }
}

