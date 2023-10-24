#include <conio.h>
#include <stdio.h>
/*
Se consideră variabilele reale a, b, c care se citesc de la tastatură.
 Să se afişeze dacă c se află în
intervalul [a, b]. Se vor scrie doua variante, una va 
folosi operatorul condiţional (? :), cealalta
instructiunea if.
*/


int main()
{
  int a,b,c; 
  printf("Introdu cele trei numere: ");
  scanf("%d %d %d",&a,&b,&c) ; 
  
  if(c>=a && c<=b)
  {
    printf("Numarul %d apartine intervalului [%d,%d].",c,a,b); 
  }
  else 
  {
    printf("Numarul %d nu apartine intervalului [%d,%d].",c,a,b); 
  }
  //sau 
  /*  int apartine = (c >= a && c <= b) ? 1 : 0;
        if(apartine) 
        {printf("Numarul %d apartine intervalului [%d,%d].",c,a,b);}
        else {
           printf("Numarul %d nu apartine intervalului [%d,%d].",c,a,b); 
        }
  */
  
  return 0;
}
