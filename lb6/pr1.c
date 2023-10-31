#include <stdio.h>
#include <string.h>
#include <ctype.h>

 /*Sa se întocmeascã un program în care se citeşte de
  la tastaturã un şir de caractere. Să se 
inverseze conţinutul şirului şi să se afişeze. 
Să se afişeze numărul apariţiilor fiecărui caracter. 
Să se elimine orice caracter care nu este literă.*/

#include <stdio.h>
#include <string.h>

int main() {
    char sir[1000];
    printf("Introdu un sir de caractere: ");
    gets(sir);

    // Inversarea sirului
    int lungime = strlen(sir);
    char temp;
    for (int i = 0; i < lungime / 2; i++) {
        temp = sir[i];
        sir[i] = sir[lungime - i - 1];
        sir[lungime - i - 1] = temp;
    }

    // Afisarea sirului inversat
    printf("Sirul inversat este: %s\n", sir);

    // Aparitiile fiecarui caracter
    int aparitii[256] = {0}; // initializam toate aparitiile cu 0
    for (int i = 0; i < lungime; i++) {
        if (isalpha(sir[i])) {
            aparitii[sir[i]]++;
        }
    }

    // Afisarea numarului de aparitii
    printf("Numarul aparitiilor fiecarui caracter:\n");
    for (int i = 0; i < 256; i++) {
        if (aparitii[i] > 0 && isalpha(i)) {
            printf("%c: %d\n", i, aparitii[i]);
        }
    }

    // Eliminarea caracterelor care nu sunt litere
    int j = 0;
    for (int i = 0; i < lungime; i++) {
        if (isalpha(sir[i])) {
            sir[j++] = sir[i];
        }
    }
    sir[j] = '\0'; // adaugam terminatorul de sir

    // Afisarea sirului fara caractere care nu sunt litere
    printf("Sirul fara caractere care nu sunt litere: %s\n", sir);

    return 0;
}

