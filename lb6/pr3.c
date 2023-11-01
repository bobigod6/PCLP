 #include <stdio.h>
 #include <string.h>
 #include <conio.h>
 /*Sã  se  întocmeascã un program care citeşte de la tastaturã
  o parolă (un sir de caractere care se 
compară cu un şir constant propus; caracterele 
tastate nu se vor afişa). Dacă parola este corectă, 
se continuă programul, dacă nu, se afişează un 
mesaj corespunzător şi se încheie execuţia 
acestuia. Se permit 3 încercări.   Nota: Pentru 
citirea parolei se va scrie o funcţie*/

void citesteParola(char *parola) {
    int i = 0;
    char caracter;
   printf("Introdu parola:");
    while (1) {
        caracter = getch() ; //caracter retine un singur caracter

        if (caracter == 13) { // verific daca caracterul este ENTER , daca da opresc while-ul
            break;
        } else if (caracter == '\b' && i > 0) { 
         // Verifică dacă caracterul introdus este tasta Backspace şi 
         //verifica daca  există cel puţin un caracter în şir
            i--;// Decrementăm indexul pentru a reveni la caracterul anterior
            printf("\b \b");
            // Utilizăm secvența de escape "\b " pentru a muta cursorul înapoi cu
            // un caracter și pentru a afișa un spațiu.
// Aceasta creează iluzia că caracterul anterior este șters vizual, fără a afecta de fapt textul introdus, 
// deoarece caracterul încă există în bufferul de intrare a tastaturii.

        }
         else {
            parola[i++] = caracter;
            printf("*");
        }
    }
    printf("\n");
}

int main() {
    char parola_corecta[20] = "parola123";
    char parola[20];
    int incercari = 2;
    int ok = 0 ;
    
    do
    {

        citesteParola(parola);
       
        if (strcmp(parola_corecta, parola) == 0) {
            ok =1; 
            printf("Parola introdusa este corecta. \n");
            break;
        } 
        else if(incercari>1) {
            memset(parola, 0, sizeof(parola));
            printf("Parola introdusa nu este corecta. Mai ai %d incercari.\n", incercari); 
            incercari-- ; 
        }
        else if(incercari <= 1)
        {
         printf("Parola introdusa nu este corecta.Mai ai o singura incercare\n") ; 
         memset(parola,0,sizeof(parola)) ;
          incercari--;
        }
    }while(incercari) ; 
       
       if (ok == 0 )
       {
         memset(parola, 0, sizeof(parola));
         citesteParola(parola);
         if (strcmp(parola_corecta, parola) == 0) {
            ok =1; 
            printf("Parola introdusa este corecta. \n");
           
        } 
        else 
         {
            printf("Ai avut prea multe incercari"); 
         }

       }

    return 0;
}
