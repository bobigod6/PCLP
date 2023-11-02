 #include <stdio.h>
 #include <string.h>
 /*Scrieti un program care citeste o linie de text de la
  tastatura si calculeaza numarul de cuvinte in 
linie si numarul de aparitii ale fiecarei litere. Un cuvant
 este prin definitie orice sir de litere care 
este  delimitat  fie  de  blank,  tab,  newline,  '.'  (punct),  ','  
  (virgula)  sau  de  inceputul  liniei. 
Presupunem ca linia de text introdusa contine numai litere, 
blank-uri, tab-uri, virgule si puncte. 
Lieterele  mari  si  mici  se  considera  a  fi  aceeasi  litera.  
Afisati  literele  in  ordine  alfabetica  si 
listati  numai  acele  litere  care  apar  in  linia  de  text  introdusa. 
 De  exemplu  daca  linia  de  text 
introdusa este: Azi e sambata*/
int este_litera(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // Este litera
    } else {
        return 0; // Nu este litera
    }
}
int main() {
   char s[101];
   fgets(s,sizeof(s),stdin);
    
    int len = strlen(s) ; 
    int i = 0  ;
    int nr_cuvinte = 0 ; 
    int frecventa[26]={0};
    // numaram cate cuvinte sunt in sirul de caractere si
    //frecventa fiecarei litere
    for(int i =0 ; i<len ; i++)
    {
        if(!este_litera(s[i]))
        {
            i++;
        }
        else 
        {
            while(este_litera(s[i]))
            {
                i++ ; 
                if(s[i]>='A' && s[i] <='Z'){
                    frecventa[s[i] + ('a'-'A')]++;
                }
                else{
                    frecventa[s[i] - 'a']++;
                }
            }
            nr_cuvinte++;
        }
    }
    printf("Sirul de caractere are %d cuvinte\n",nr_cuvinte);
    
    for(int i = 0;i<26;i++)
    {   
        if(frecventa[i]>0)
        {
            printf("%c %d\n",i+'a',frecventa[i]);
        }
    }
    return 0;
}
