#include <stdio.h>
/*
    Sa  se  scrie  un  program  in  care  se  citeste  de 
     la  tastatura  cate  un  caracter.  Sa  se  afiseze  pentru 
fiecare caracter daca acel caracter 
este: - litera mare - litera mica - cifra - alt caracter 
Citirea de caractere se va opri la apasarea tastei „esc” ( are codul ASCII 27). 
*/
int main() {
    char caracter;

    while (1) {
        printf("Introduceti un caracter (apasati 'esc' pentru a iesi): ");
        caracter = getchar();

        if (caracter == 27) {
            break; // Dacă se apasă 'esc', ieșim din buclă
        }

        if (caracter >= 'A' && caracter <= 'Z') {
            printf("%c este o litera mare.\n", caracter);
        } else if (caracter >= 'a' && caracter <= 'z') {
            printf("%c este o litera mica.\n", caracter);
        } else if (caracter >= '0' && caracter <= '9') {
            printf("%c este o cifra.\n", caracter);
        } else {
            printf("%c este un alt caracter.\n", caracter);
        }

    }

    return 0;
}
