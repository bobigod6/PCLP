#include <conio.h>
#include <stdio.h>
/*
Să se scrie un program în care se determină maximul dintre
 trei valori in doua variante,
conform schemelor logice urmatoare
*/
int logica2(int *f , int *g,int *h)
{       
    int max2 = *f; 
  
    if(*f>*g && *f>*h)
    {
         max2 = *f; 
    }
    else if( *g > *h)
    {
         max2 = *g; 
    }
    else 
    {
         max2=  *h ; 
    }

    return max2; 
}

int main()
{
  int a,b,c,max =0 ;
  int met2 = logica2(a,b,c); 
  printf("Introdu 3 numere : ");
  scanf("%d %d",&a,&b,&c);
  
  if (a>b)
  {
        if(a>c)
        {
            max = a;
        }
  }
  else  if(b>c)
  {
     max = b; 
  }
  else {
    max = c; 
  }
  printf("Valoarea maxima este %d \n",max); 

  printf("Valoarea maxima este %d",met2) ; 

  return 0;
}
