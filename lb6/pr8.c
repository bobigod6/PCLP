 #include <stdio.h>
 /*Scrieti  un  program  care  citeste  un  numar  de  cel  
 mult  100  de  intregi  si  ii  aseaza  intr-un  sir  in 
ordine  crescatoare.    Programul  trebuie  scris  in  asa 
 fel  incat  numerele  se  citesc  de  la  tastatura 
unul cate unul si dupa fiecare citire ele sunt ordonate*/
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Schimbă elementele arr[j] și arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
 int main()
 {  
     int n ,a[101];
     int lungime = 0 ; 
      printf("Introduceti un numar:");
     scanf("%d",&n);
      a[lungime++] = n ; 
     while(n)
     {
        scanf("%d",&n);
        a[lungime++] = n ; 
        bubbleSort(a,lungime);
     }

      for(int i = 1 ; i < lungime;i++)
      {
         printf("%d ",a[i]);
      }
    return 0 ;
 }
