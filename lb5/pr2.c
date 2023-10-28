#include <stdio.h>
/*Sa se scrie un program in care se defineste o 
functie care preia ca parametru un intreg. Functia 
returneaza 1 daca numarul este prim, sau 0, daca 
numarul nu este prim. int prim(unsigned); In functia main() 
se citesc doua valori pentru a şi b care reprezinta
 capetele unui interval [a , b]. 
Să se afişeze toate valorile prime din intervalul dat. */
unsigned prim( int n)
{
    if(n==2)return 1;
    if(n%2==0 || n==1)return 0 ; 
    for(int d=3;d*d<=n;d+=2)
        {if(n%d==0)return 0 ;
        
        }
        return 1; 
}
int main()
{   
    int a, b;
    printf("Introdu capetele intervalului (a b): ");
    scanf("%d %d", &a, &b);

    printf("Numere prime in intervalul [%d, %d]:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (prim(i)) {
            printf("%d ", i);
        }
    }
    return 0 ; 
}