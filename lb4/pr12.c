#include <stdio.h>
/*
Să se întocmească un program prin care se citesc de la tastatura 
doi întregi a,b >=2. Să se afişeze 
divizorii celor doi întregi. 
Să se calculeze şi să se afişeze c.m.m.d.c. şi c.m.m.m.c. pentru cele 
două valori.
*/
int main()
{
    int a ,b ; printf("Introduceti 2 intregi:");
    scanf("%d %d",&a,&b);
    //divizorii lui a 
    printf("Divizorii lui %d sunt ",a);
    int auxa  = a , auxb = b ; 
    for(int i = 2;i<=a;i++)
    {   
        if(a%i==0)
        {
            printf(" %d",i) ; 
        }
    }
    // divizorii lui b 
    printf("\n");
    printf("Divizorii lui %d sunt ",b);
    for(int i = 2;i<=b;i++)
    {   
        if(b%i==0)
        {
            printf(" %d ",i) ; 
        }
    }
    //cmmdc = cel mai mare divizor comun
    printf("\n");
    int dif = 0 ; 
    while(a != b)
    {
        if(a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }
    printf("cmmdc  este %d",a);
    //cmmmc = cel mai mic multiplu comun
    printf("\n");
    int r;
    int copie1 = auxa,copie2=auxb ; 
    while (auxb != 0) 
    {
        r = auxa % auxb;
        auxa = auxb;
        auxb = r;
    }
    int cmmmc = (copie1 * copie2) / auxa; // Calculul cmmmc-ului
    printf("cmmmmc  este %d", cmmmc);
 

    return 0 ; 
}