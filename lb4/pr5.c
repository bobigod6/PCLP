#include <stdio.h>
/*
Sa se scrie un program in care se citeste de la tastatura 
o data calendaristica (zi, luna, an -  citite 
ca valori intregi).  
Daca data este corecta ( zi =1...31, luna=1...12, an >1900), sa se afiseze data, 
pentru luna fiind afisata denumirea. 
De exemplu, data 15.10.2009 va fi afisata 15 octombrie 2009. In secventa de 
afisare se va folosi instructiunea switch. 
Sa se afiseze daca anul este bisect. (Un an bisect este un an care este divizibil cu 4 dar nu cu 
100, exceptie facand anii divizibili cu 400 care sunt bisecti).*/
int main()
{
    int zi , luna , an ; 
    printf("Introdu data calendaristica:");
    scanf("%d %d %d",&zi,&luna,&an);
    if(zi>=1 && zi <=31 && luna>=1 && luna<=12 && an >1900)
    {
        switch(luna)
        {
           
    case 1:
        printf("%d ianuarie %d", zi, an);
        break;
    case 2:
        printf("%d februarie %d", zi, an);
        break;
    case 3:
        printf("%d martie %d", zi, an);
        break;
    case 4:
        printf("%d aprilie %d", zi, an);
        break;
    case 5:
        printf("%d mai %d", zi, an);
        break;
    case 6:
        printf("%d iunie %d", zi, an);
        break;
    case 7:
        printf("%d iulie %d", zi, an);
        break;
    case 8:
        printf("%d august %d", zi, an);
        break;
    case 9:
        printf("%d septembrie %d", zi, an);
        break;
    case 10:
        printf("%d octombrie %d", zi, an);
        break;
    case 11:
        printf("%d noiembrie %d", zi, an);
        break;
    case 12:
        printf("%d decembrie %d", zi, an);
        break;
        }
    }
    printf("\n");//linie noua 
    //verificam daca anul este bisect 
    
    if((an%4==0 && an%100!=0) || an%400==0)
    {
        printf("Anul %d este bisect.");

    }
    else 
    {
        printf("Anul %d nu este bisect.");
    }
    return 0  ;
}