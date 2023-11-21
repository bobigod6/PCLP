 #include <stdio.h>
 #include <stdlib.h>
 /*
 Sa se scrie un program in care se aloca 
 dinamic doua tablouri unidimensionale A si B 
(dimensiunile celor tablouri se citesc de la tastatura).
 Sa se construiasca un al treilea tablou, C, 
care sa preia elementele din A si B, in ordine crescatoare a elementelor*/
#include <stdio.h>
#include <stdlib.h>

// Prototipul functiei de combinare a tablourilor
void combinaTablouri(int *a, int m, int *b, int n, int *c);

int main() {
    int m, n;

    // Citim dimensiunile tablourilor de la utilizator
    printf("Introduceti dimensiunea tabloului A: ");
    scanf("%d", &m);

    printf("Introduceti dimensiunea tabloului B: ");
    scanf("%d", &n);

    // Alocam dinamic tablourile unidimensionale a si b
    int *a = (int *)malloc(m * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));

    // Verificăm dacă alocarea a fost reușită
    if (a == NULL || b == NULL) {
        printf("Alocarea dinamica a esuat.\n");
        return 1;  // Ieșim din program cu cod de eroare
    }

    // Initializam valorile tablourilor
    printf("Introduceti elementele tabloului A (in ordine crescatoare): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Introduceti elementele tabloului B (in ordine crescatoare): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Alocam dinamic tabloul c (rezultat)
    int dimensiuneC = m + n;
    int *c = (int *)malloc(dimensiuneC * sizeof(int));

    // Verificăm dacă alocarea a fost reușită
    if (c == NULL) {
        printf("Alocarea dinamica a esuat.\n");
        return 1;  // Ieșim din program cu cod de eroare
    }

    // Apelam functia de combinare a tablourilor
    combinaTablouri(a, m, b, n, c);

    // Afisam valorile tabloului c (rezultat)
    printf("\nElementele tabloului rezultat sunt: ");
    for (int i = 0; i < dimensiuneC; i++) {
        printf("%d ", c[i]);
    }

    // Eliberam memoria alocata dinamic
    free(a);
    free(b);
    free(c);

    return 0;
}

// Definim functia de combinare a tablourilor
void combinaTablouri(int *a, int m, int *b, int n, int *c) {
    int i = 0, j = 0, k = 0;

    // Combinam elementele in ordine crescatoare
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Adaugam elementele ramase din tabloul a (daca exista)
    while (i < m) {
        c[k++] = a[i++];
    }

    // Adaugam elementele ramase din tabloul b (daca exista)
    while (j < n) {
        c[k++] = b[j++];
    }
}

