 
#include <stdio.h>
/*Să se întocmească un program în care : 
 - se citeşte o valoare x cuprinsă în intervalul [1,170]; - 
 se citeşte o valoare y cuprinsă în intervalul [1,x]; -
  se calculează şi afişează x! şi y!; - se calculează şi 
  afişează aranjamente de x elemente luate 
  câte y A(x,y)=x*(x-1)*(x-2)*...* (x-y+1) - se 
  calculează şi afişează combinări de x elemente 
  luate câte y C(x,y) = A(x,y) / y! Obs.  Pentru calculul factorialului, 
aranjamentelor si combinari, se vor defini functii. */
#include <stdio.h>

int fact(int x) {
    if (x == 0 || x == 1) return 1;
    return x * fact(x - 1);
}

int aranj(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= (x - i);
    }
    return result;
}

int combi(int x, int y) {
    return aranj(x, y) / fact(y);
}

int main() {
    int x, y;
    printf("Introduceti doua valori: ");
    scanf("%d %d", &x, &y);

    if (x >= 1 && x <= 170 && y >= 1 && y <= x) {
        int fctx = fact(x);
        int fcty = fact(y);
        int aranjamente = aranj(x, y);
        int combinari = combi(x, y);

        printf("Factorial %d: %d\n", x, fctx);
        printf("Factorial %d: %d\n", y, fcty);
        printf("Aranjamente A(%d, %d): %d\n", x, y, aranjamente);
        printf("Combinari C(%d, %d): %d\n", x, y, combinari);
    } else {
        printf("Input invalid. x trebuie sa fie intre 1 si 170, iar y <x\n");
    }

    return 0;
}
