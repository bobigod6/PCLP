#include <stdio.h>
/*Sa se scrie un program care afiseaza puterile 
lui sapte mai mici decat un numar n dat.
 Valoarea lui n este citita de la tastatura.*/
int main()
{   
    int n ;
    int p = 1; 
    printf("Introdu un numar:");
    scanf("%d",&n);
    for(int  i  = 1 ;i<=n;i++)
    {
        printf("%d  ",7*p); 
        p*=7;
    }
   

    return 0 ; 
}