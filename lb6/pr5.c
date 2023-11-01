 #include <stdio.h>
 /*Scrieti un program în care se citesc valorile pentru 
 un sir de intregi. Se sterg toate duplicatele 
(adica o valoare nu va aparea decat o singura data in sir). 
 Sa se afiseze şirul rezultat si numarul 
elementelor acestuia*/
int main() {
    int n;

    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    int sir[n];

    printf("Introduceti elementele:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sir[i]);
    }

    // Eliminam duplicatele
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (sir[i] == sir[j]) {
                for (int k = j; k < n-1; k++) {
                    sir[k] = sir[k+1];
                }
                n--;
                j--; // Revenim la acelasi index pentru a verifica urmatorul element
            }
        }
    }

    // Afisam sirul rezultat si numarul de elemente
    printf("Sirul rezultat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sir[i]);
    }
    printf("\nNumarul de elemente in sirul rezultat: %d\n", n);

    return 0;
}

