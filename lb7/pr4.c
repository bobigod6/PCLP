

 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100
 /*Sa se scrie un program in care se citesc de la tastatura numele,
  prenumele si initiala tatalui unei 
persoane si se formeaza un sir de caractere, alocat dinamic, care sa 
contina numele complet. 
(De exemplu daca se citesc sirurile ”Georgescu”, ”Mihai”, ”St.”, se
 formeaza sirul: ”Georgescu 
St. Mihai”)*/

char *formeazaNumeComplet(char *nume, char *prenume, char *initialaTata) {
    // Alocam memorie pentru numele complet
    char *numeComplet = (char *)malloc(MAX_LEN * sizeof(char));

    // Verificăm dacă alocarea a fost reușită
    if (numeComplet == NULL) {
        printf("Alocarea dinamica a esuat.\n");
        exit(1);  // Ieșim din program cu cod de eroare
    }

    // Formam numele complet
    strcpy(numeComplet, nume);
    strcat(numeComplet, " ");
    strcat(numeComplet, initialaTata);
    strcat(numeComplet, ". ");
    strcat(numeComplet, prenume);

    return numeComplet;
}

int main() {
    char nume[MAX_LEN], prenume[MAX_LEN], initialaTata[MAX_LEN];

    // Citim numele, prenumele si initiala tatalui de la tastatura
    printf("Introduceti numele: ");
    fgets(nume, MAX_LEN, stdin);
    nume[strcspn(nume, "\n")] = '\0';  // Eliminam caracterul newline

    printf("Introduceti prenumele: ");
    fgets(prenume, MAX_LEN, stdin);
    prenume[strcspn(prenume, "\n")] = '\0';

    printf("Introduceti initiala tatalui: ");
    fgets(initialaTata, MAX_LEN, stdin);
    initialaTata[strcspn(initialaTata, "\n")] = '\0';

    // Formam si afisam numele complet
    char *numeComplet = formeazaNumeComplet(nume, prenume, initialaTata);
    printf("\nNumele complet este: %s\n", numeComplet);

    // Eliberam memoria alocata dinamic
    free(numeComplet);

    return 0;
}
