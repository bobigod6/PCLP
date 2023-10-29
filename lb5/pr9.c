 
#include <stdio.h>
/*Sa se scrie un program în care se verifică dacă 
într-un număr există cifre care se repetă. Se va 
afişa care cifre se repetă şi de câte ori.*/
int main()
{
    int n ;
    int  ok = 1; 
    printf("Introdu un numar:");
    scanf("%d",&n);
    int copie = n  ;
    int cifra = n%10 ; n/=10;
    while(n)
    {
        if(cifra == n%10){ok = 0 ; break;}
        else {cifra = n%10 ;}
        n/=10;
    }
    if(ok)
    {printf("Numarul %d nu are cifre care se repeta.",copie);}
    else 
    {printf("Numarul %d are cifre care se repeta.",copie); }

   return 0 ;
}