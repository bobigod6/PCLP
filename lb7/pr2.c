 #include <stdio.h>
 #include <stdlib.h>
 /*
 Sa se scrie un program in care se aloca 
 dinamic doua tablouri unidimensionale A si B 
(dimensiunile celor tablouri se citesc de la tastatura).
 Sa se construiasca un al treilea tablou, C, 
care sa preia elementele din A si B, in ordine crescatoare a elementelor*/
void read_vec(int *n, int **v)
{
	scanf("%d", n);
	int *w = (int *)malloc(*n * sizeof(int));
	if (!w) { // daca nu pot aloca, opresc executia si afisez un mesaj
		fprintf(stderr, "malloc() failed\n");
		*v = NULL;
		return;
	}
	*v = w;

	for (int i = 0; i < *n; i++) {
		scanf("%d", &w[i]);
	}
}
 int main()
 {
     int n , m ,*a , *b ; 
     read_vec(int *n , int **a);
     read_vec(int *m , int **b);

     for(int  i = 0 ; i < n ; i++)
     {
        printf("%d ",a[i]) ; 
     }
    return 0 ;
 }
