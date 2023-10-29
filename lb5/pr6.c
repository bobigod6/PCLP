 #include <stdio.h>
 /*Sa se scrie un program la execuţia căruia se afişează: 
  un patrat  latura de n care afiseaza deasupra diag secundare 0 si sub 1 */
int main() {
    int randuri = 11,latime = 12;
  for(int i=1;i<=randuri;i++)
  {  int  j = 0; 
    while( j<latime-i)
      {
        printf("0");
        j++; 
      }
    while(j<latime)
      {
        printf("1");
        j++;
      }
    printf("\n") ; 
  }

    return 0;
}




