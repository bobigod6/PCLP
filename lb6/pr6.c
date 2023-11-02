 #include <stdio.h>
 /*Scrieti un program care citeste un sir de valori de tip int. 
 Sa determine intregii distincti din sir 
si numarul lor de aparitii. Se tipareste o lista cu doua coloane.
 In prima coloana trebuie sa apara 
intregii  distincti  din  sir  in  ordine  descrescatoare, 
 si,  in  cea  de  a  doua,  numarul  aparitiilor 
intregului respectiv in sirul de intregi. De exemplu, daca sirul este: 
 -12  3  -12  4  1  1  -12  1  -1   1  2  3  4  2  3  -12*/
 int main()
 {
     int n , sir[101]; printf("Introdu numarul de elemente:");
     scanf("%d",&n);

     for(int i = 1;i<=n;i++)
     {
        scanf("%d",&sir[i]);
     }
     //ordonam sirul descrescator  
        for(int i =1;i<n;i++)
        {
            for(int j = i+1;j<=n;j++)
                {
                    if(sir[i]<sir[j])
                    {
                        int aux = sir[i];
                        sir[i] = sir[j];
                        sir[j] = aux; 
                    }
                 }
        }
    //determinam nr aparitii fiecarui element si le afiseaz 
    int  nraparitii = 0 ;
    for(int i =1; i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(sir[i] == sir[j]){nraparitii++;}
        }
        printf("%d  %d\n",sir[i],nraparitii);
        nraparitii = 0 ; 
    }

    return 0 ;
 }