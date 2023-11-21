#include <stdio.h>
#include <conio.h>

int** citire(int*n,int*m)
{
    int i , j ;
    int ** mat; 
    printf("Citire date matrice\n");
    printf("\n nr. linii=");scanf("%d,n");
    printf("\n nr. coloane=");scanf("%d,m");

    //alocare memorie
    mat = new int*[*n];
    for(i=0;i<*n;i++)
    {
        mat[i] = new int[*m];
    }
    
    //citirea elementelor
    for(i=0;i<*n;i++)
     for(j=0;j<*m;j++)
     {
        printf("mat[%d][%d]=",i,j);
        scanf("%d",&mat[i][j]);
     }
     return mat; 
}
void afisare(int** mat,int n,int m )
{
    int i ,j;
    printf("\nAfisare elemente matrice");
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
     {
        printf("%5d",mat[i][j]);
     }
     printf("\n");
    }
}
void free_mem(int** mat, int n)
{
    int  i ;
    printf("\n Eliberare memorie\n");
    for(i=0;i<n;i++)
        delete[](*mat)[i];
    delete[](*mat);
}
void eliminaLinie(int*** mat, int* n, int m, int linie) {
    int i, j;

    // Verificare daca linia este valida
    if (linie < 0 || linie >= *n) {
        printf("Linia indicata nu exista.\n");
        return;
    }

    // Eliberare memoria pentru linia eliminata
    free((*mat)[linie]);

    // Deplasare elemente pentru a umple spatiul liber
    for (i = linie; i < *n - 1; ++i) {
        (*mat)[i] = (*mat)[i + 1];
    }

    // Realocare memorie pentru matrice
    *mat = (int**)realloc(*mat, (*n - 1) * sizeof(int*));

    // Actualizare numar de linii
    *n -= 1;
}
void eliminaColoana(int*** mat, int n, int* m, int coloana) {
    int i, j;

    // Verificare daca coloana este valida
    if (coloana < 0 || coloana >= *m) {
        printf("Coloana indicata nu exista.\n");
        return;
    }

    // Deplasare elemente pentru a umple spatiul liber
    for (i = 0; i < n; ++i) {
        for (j = coloana; j < *m - 1; ++j) {
            (*mat)[i][j] = (*mat)[i][j + 1];
        }
    }

    // Realocare memorie pentru matrice
    for (i = 0; i < n; ++i) {
        (*mat)[i] = (int*)realloc((*mat)[i], (*m - 1) * sizeof(int));
    }

    // Actualizare numar de coloane
    *m -= 1;
}
void insereazaLinie(int*** mat, int* n, int m, int linie) {
    int i, j;

    // Verificare daca linia este valida
    if (linie < 0 || linie > *n) {
        printf("Pozitia indicata pentru inserare nu este valida.\n");
        return;
    }

    // Realocare memorie pentru matrice pentru a adauga o linie
    *mat = (int**)realloc(*mat, (*n + 1) * sizeof(int*));

    // Deplasare elemente pentru a face loc pentru noua linie
    for (i = *n; i > linie; --i) {
        (*mat)[i] = (*mat)[i - 1];
    }

    // Alocare memorie pentru noua linie
    (*mat)[linie] = (int*)malloc(m * sizeof(int));

    // Citire elemente pentru noua linie
    printf("Introduceti elementele pentru noua linie:\n");
    for (j = 0; j < m; ++j) {
        printf("mat[%d][%d] = ", linie, j);
        scanf("%d", &(*mat)[linie][j]);
    }

    // Actualizare numar de linii
    *n += 1;
}
void insereazaColoana(int*** mat, int n, int* m, int coloana) {
    int i, j;

    // Verificare daca coloana este valida
    if (coloana < 0 || coloana > *m) {
        printf("Pozitia indicata pentru inserare nu este valida.\n");
        return;
    }

    // Deplasare elemente pentru a face loc pentru noua coloana
    for (i = 0; i < n; ++i) {
        // Realocare memorie pentru fiecare linie pentru a adauga o coloana
        (*mat)[i] = (int*)realloc((*mat)[i], (*m + 1) * sizeof(int));

        for (j = *m; j > coloana; --j) {
            (*mat)[i][j] = (*mat)[i][j - 1];
        }

        // Citire element pentru noua coloana
        printf("mat[%d][%d] = ", i, coloana);
        scanf("%d", &(*mat)[i][coloana]);
    }

    // Actualizare numar de coloane
    *m += 1;
}
int main()
{
    int** mat ;
    int linii,coloane;
    mat = citire(&linii,&coloane);
    eliminaLinie(&matrice, &linii, coloane, 0);
    printf("\nMatrice dupa eliminarea primei linii:\n");
    afisareMatrice(matrice, linii, coloane);
    
    eliminaColoana(&matrice, linii, &coloane, 1);
    printf("\nMatrice dupa eliminarea celei de-a doua coloane:\n");
    afisareMatrice(matrice, linii, coloane);
    
    insereazaLinie(&matrice, &linii, coloane, 1);
    printf("\nMatrice dupa inserarea unei linii la pozitia 1:\n");
    afisareMatrice(matrice, linii, coloane);
    
    insereazaColoana(&matrice, linii, &coloane, 2);
    printf("\nMatrice dupa inserarea unei coloane la pozitia 2:\n");
    afisareMatrice(matrice, linii, coloane);
    
    free_mem(&mat,linii);
   return 0 ;
}