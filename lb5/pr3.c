#include <stdio.h>
/*
Sa se scrie un program in care se defineste o 
functie unsigned fact(unsigned); care calculeaza si
 returneaza factorialul valorii preluata prin parametru.
  In  functia  main()  intr-o  secventa  repetitiva  se  citesc 
   de  la  tastatura  valori  intregi  si  se  afiseaza 
factorialul corespunzator acestora. Secventa este finalizata 
la introducerea valorii 0 (zero). 
*/
unsigned fact(unsigned n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}
int main()
{
      unsigned num;

    while (1) {
        printf("Introdu un numar (0 pentru a iesi): ");
        scanf("%u", &num);

        if (num == 0) {
            break;
        }

        unsigned factorial = fact(num);
        printf("Factorialul lui %u este %u\n", num, factorial);
    }

    return 0 ; 
}