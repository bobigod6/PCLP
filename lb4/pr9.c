#include <stdio.h>
/*
Scrieti o functie care evalueaza semnul unui intreg dat. 
Functia returneaza 1 daca intregul este 
> 0, 0 daca intregul este egal cu 0 si –1 daca intregul este  < 0. 
Includeti functia intr-un program 
si testati-o
*/
int semn(int n)
{
    if(n>=0)return 1;
    else return -1;
}
int main()
{
    int  n ; 
    printf("Introdu un numar:");
    scanf("%d",&n);
    
    int res = semn(n);
    printf("%d",res);


    return 0 ; 
}