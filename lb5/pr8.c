 #include <stdio.h>
 /*Sa se scrie un program care afişează câte cifre
  alcătuiesc un întreg (citit de la tastatură) şi care 
sunt acestea.*/
 int main()
 {
     int n ,nrcifre=0;
     int copie = n ; 
     printf("Introdu un numar:");
     scanf("%d",&n);
     while(n)
     {
        nrcifre++;
        n/=10;
     }
     printf("Numarul %d are %d cifre",copie,nrcifre);
    return 0 ;
 }
