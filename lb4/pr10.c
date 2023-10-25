#include <stdio.h>

/* Sa  se  scrie  un  program  care  citeste  coordonatele  (x,  y) 
 ale  unui  punct  din  plan  si  afiseaza 
numarul cadranului in care se afla (1, 2, 3, 4). 
Se vor verifica succesiv semnele valorilor x si y. 
S-ar putea folosi instructiunea "switch"?*/
//se poate folosi functia switch,switch(1){case(x>0 && y>0)....}
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);

    if(x>0 && y>0)
    {
        printf("Cadranul 1");
    }
    else if(x<0 && y>0)
    {
        printf("Cadranul 2");
    }
    else if(x<0 && y<0)
    {
        printf("Cadranul 3");
    }
    else 
    {
        printf("Cadranul 4");
    }

    return 0 ; 
}