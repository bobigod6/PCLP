#include <stdio.h>

unsigned int inverseazaOctetiiIntregului(unsigned int num) {
    unsigned int byte1 = (num & 0xFF000000) >> 24;
    unsigned int byte2 = (num & 0x00FF0000) >> 8;
    unsigned int byte3 = (num & 0x0000FF00) << 8;
    unsigned int byte4 = (num & 0x000000FF) << 24;

    return byte1 | byte2 | byte3 | byte4;
}

int main() {
    unsigned int val = 123456789;

    printf("Valoarea initiala: %u\n", val);

    val = inverseazaOctetiiIntregului(val);

    printf("Valoarea dupa inversare octeti: %u\n", val);

    return 0;
}
