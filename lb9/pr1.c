#include <stdio.h>

// Definim o uniune care permite accesul individual la octetii unui intreg de 4 bytes
union IntUnion {
    int num;
    unsigned char bytes[4];
};

// Functie pentru criptarea si decriptarea unui intreg
void cripteazaDecripteazaIntreg(union IntUnion *val) {
    // Inversam octetii intre ei: primul cu al patrulea, respectiv al doilea cu al treilea
    unsigned char temp = val->bytes[0];
    val->bytes[0] = val->bytes[3];
    val->bytes[3] = temp;

    temp = val->bytes[1];
    val->bytes[1] = val->bytes[2];
    val->bytes[2] = temp;
}

int main() {
    // Initializam o variabila de tip IntUnion cu un intreg dat
    union IntUnion val;
    val.num = 123456789;  // Puteti schimba valoarea dupa necesitate

    // Afisam valoarea initiala
    printf("Valoarea initiala: %d\n", val.num);

    // Apelam functia pentru criptare
    cripteazaDecripteazaIntreg(&val);

    // Afisam valoarea criptata
    printf("Valoarea criptata: %d\n", val.num);

    // Apelam functia pentru decriptare
    cripteazaDecripteazaIntreg(&val);

    // Afisam valoarea dupa decriptare
    printf("Valoarea dupa decriptare: %d\n", val.num);

    return 0;
}
