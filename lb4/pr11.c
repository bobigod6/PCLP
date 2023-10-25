#include <stdio.h>
#include <math.h>
/*
Se scrie un program pentru rezolvarea ecuaţiei de gradul II
*/
int main()
{
    float a,b,c;
    printf("Introduceti coeficientii:");
    scanf("%f %f %f",&a,&b,&c);
    float delta  = (b*b)-(4*a*c);
    if(delta > 0 ){
        float x1 = ((-1)*b-sqrt(delta))/(2*a);
        float x2 = ((-1)*b+sqrt(delta))/(2*a);
        printf("Ecuatia are solutiile %.2f , %.2f",x1,x2);

    }
    else if(delta == 0 )
    {
        float x = ((-1)*b)/(2*a);
        printf("Ecuatia are solutia unica %.2f",x);
    }
    else 
    {
        printf("Ecuatia nu are solutii reale.");
    }
    return 0 ;
}