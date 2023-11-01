 #include <stdio.h>
 #include <string.h>
 #include <conio.h>
 /*Se citeşte de la tastatură  cnp-ul  unei  persoane.  
 Sa  se  afiseze  sexul  si  data  nasterii  ale  acelei 
persoane.  OBS. Prima componenta (cifra) 
reprezintă sexul și secolul în care s-a născut persoana și poate 
avea una dintre următoarele valori: 
1 pentru persoanele de sex masculin născute între anii 1900 - 1999 
2 pentru persoanele de sex feminin născute între anii 1900 - 1999 
3 pentru persoanele de sex masculin născute între anii 1800 - 1899 
4 pentru persoanele de sex feminin născute între anii 1800 - 1899 
5 pentru persoanele de sex masculin născute între anii 2000 - 2099 
6 pentru persoanele de sex feminin născute între anii 2000 - 2099 
7 pentru persoanele rezidente, de sex masculin 
8 pentru persoanele rezidente, de sex feminin
   Trebuie sa afisez sexul si data nasterii 
*/
 int main()
 {
     int cnp[14] ; printf("Introdu un CNP:"); 
     for(int i = 0 ; i <14;i++){cin >> cnp[i];}
     switch (cnp[0])
     {
      case 1: if(cnp[0] == 1){printf("sex masculin născute între anii 1900 - 1999");}
      case 2: if(cnp[0] == 2){printf("sex feminin născute între anii 1900 - 1999");}
      case 3: if(cnp[0] == 3){printf("sex masculin născute între anii 1800 - 1899");}
      case 4: if(cnp[0] == 4){printf("sex feminin născute între anii 1800 - 1899");}
      case 5: if(cnp[0] == 5){printf("sex masculin născute între anii 2000 - 2099");}
      case 6: if(cnp[0] == 6){printf("sex feminin născute între anii 2000 - 2099");}
      
     default:
      break;
     }

    return 0 ;
 }
