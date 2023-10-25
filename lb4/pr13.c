#include <stdio.h>
/*
Să se scrie un program în care se declară o variabilă de tip int. 
Se citeşte de la tastatură. Să se 
determine şi să se afişeze inversul valorii acesteia. 
(De exemplu, inversul lui 12345 este 
54321).

*/
int main()
{
     int a ; scanf("%d",&a);
     int inv = 0  ;
     while(a)
     {
        inv  = inv*10 + a%10; 
        a/=10;
     }
     printf("%d",inv);
    return 0 ;
}