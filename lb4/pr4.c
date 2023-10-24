#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Introduceti 4 numere : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Intersectia
    if (b >= c && d >= a) {
        int intersectie_stanga = (a > c) ? a : c;
        int intersectie_dreapta = (b < d) ? b : d;

        printf("Intersectia intervalelor [%d, %d] si [%d, %d] este [%d, %d]\n",
               a, b, c, d, intersectie_stanga, intersectie_dreapta);
    } else {
        printf("Intersectia intervalelor [%d, %d] si [%d, %d] este vida\n", a, b, c, d);
    }
    // Reuniunea
    int reuniune_stanga = (a < c) ? a : c;
    int reuniune_dreapta = (b > d) ? b : d;

    printf("Reuniunea intervalelor [%d, %d] si [%d, %d] este [%d, %d]\n",
           a, b, c, d, reuniune_stanga, reuniune_dreapta);

    return 0;
}
