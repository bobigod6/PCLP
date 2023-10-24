#include <conio.h>
#include <stdio.h>
/*Să se scrie un program în care se declară o variabilă de tip 
int pentru care se citeste valoare de
la tastatură. Să se afiseze un mesaj care să indice dacă 
valoarea este pară sau impară (se va
folosi instructiunea if).
*/
#include <stdio.h>

int main()
{
  int a; 
  printf("Introduceti un numar: ");
  scanf("%d", &a);
  
  if(a % 2 == 0)
  {
    printf("Numarul %d este par\n", a);
  }
  else 
  {
    printf("Numarul %d este impar\n", a);
  }

  return 0;
}
