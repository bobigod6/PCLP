#include <stdio.h>
/*
Sa se scrie un program in care se citeste de la tastatura un caracter. 
Daca este litera mica, sa se 
afiseze majuscula corespunzatoare (daca este ’a’ se va afisa ’A’), 
iar daca este litera mare sa se 
afiseze litera mica corespunzatoare (daca este ’A’ se va afisa’a’).*/
int main()
{
    char c ; 
    printf("Introdu un caracter:");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        {
            char lit_mare = c-('a'-'A');//'a'-'A' = 32 , a=97 A=65
            printf("%c",lit_mare); 
        }
    else if(c>='A' && c<='Z')
    {
        char lit_mica = c + ('a'-'A');
        printf("%c",lit_mica);
    }
    
    
    return 0 ;
}