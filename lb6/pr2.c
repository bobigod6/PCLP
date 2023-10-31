#include <stdio.h>
#include <stdlib.h>
/*Sa  se  scrie  un program în care se citeşte un număr
 natural în baza 10. Să se opteze pentru o 
bază de reprezentare (intre 2 si 16) şi să se 
afişeze numărul în acea bază.  Obs. In stdlib.h este 
definita functia:  char *  itoa ( int value, char * str, int base )*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numar, baza;
    char rezultat[100];

    // Citirea numărului în baza 10
    printf("Introduceti un numar in baza 10: ");
    scanf("%d", &numar);

    // Citirea bazei de reprezentare
    printf("Introduceti o baza intre 2 si 16: ");
    scanf("%d", &baza);

    // Verificarea dacă baza este între 2 și 16
    if (baza < 2 || baza > 16) {
        printf("Baza introdusa nu este valida.\n");
        return 1; // Ieșim din program cu un cod de eroare
    }

    // Convertirea și afișarea rezultatului
    itoa(numar, rezultat, baza);
    printf("Reprezentarea in baza %d: %s\n", baza, rezultat);

    return 0;
}

