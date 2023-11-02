 #include <stdio.h>
 #include<string.h>
 /*Un  sir  care  citit  de  la  cap  la  coada  si  de  la  coada
   la  cap  este  acelasi  se  numeste  palindrom 
(exemplu:  radar ,gigi).  Scrieti  un  program  care  citeste  un  sir 
 de  caractere  de  la  tastatura  si  decide 
daca este sau nu palindrom*/
 int main()
 {
     char s[101] ; printf("Introduceti un cuvant:");
     scanf("%s",&s);
     int ok = 1; 
     int len = strlen(s) - 1  ; 
     int i =  0 ; 
     int j  = len ; 
     while(i<len/2 && j>len/2)
     {
      if (s[i++] != s[j--]){ok=0;break;}
     }
     if(ok){printf("e palindrom");}
     else {printf("nu e palindrom");} 
     
    return 0 ;
 }
