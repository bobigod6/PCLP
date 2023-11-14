 #include <stdio.h>
 /*Sa se scrie un program in care se exemplifica 
 folosirea variabilelor pointeri de date: 
 Se declara variabile de tip float şi pointer la acelaşi tip. 
Se fac atribuiri între acestea. 
 Se afişează conţinutul variabilelor, adresele acestora
 şi valorile referite prin pointeri. 
 Se modifică valori prin indirectare şi se urmăresc modificările 
valorilor variabilelor. 
 Se declară un tablou unidimensional cu iniţializare. 
Se afişează şi se citesc de la tastatură 
elementele sale făcând referire prin indecşi şi apoi folosind 
operaţii cu pointeri*/
 int main()
 {
     float numar ; scanf("%f",&numar);
     float *pointer_numar = &numar;

     // Se afiseaza continutul variabilelor, adresele acestora si valorile referite prin pointeri
    printf("Variabila 'numar': %f\n", numar);
    printf("Adresa variabilei 'numar': %p\n", (void*)&numar);
    printf("Valoarea referita de pointerul 'pointer_numar': %f\n", *pointer_numar);
    printf("Adresa pointerului 'pointer_numar': %p\n", (void*)&pointer_numar);
    
    // Se modifica valori prin indirectare si se urmaresc modificarile valorilor variabilelor
    *pointer_numar = 20.8;

    printf("\nDupa modificare:\n");
    printf("Variabila 'numar': %f\n", numar);
    printf("Valoarea referita a pointerului 'pointer_numar': %f\n", *pointer_numar);
    
    // Se declara un tablou unidimensional cu initializare
    int arr[5] = {1, 2, 3, 4, 5};
    int *pointer_arr = arr;

    // Se afiseaza elementele tabloului folosind indexii elementelor
    printf("\nElementele tabloului folosind indexii elementelor:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Se afiseaza elementele tabloului folosind operatii cu pointeri
    printf("\nElementele tabloului folosind pointeri:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(pointer_arr + %d) = %d\n", i, *(pointer_arr + i));
    }

    // Se citesc elementele de la tastatura folosind pointeri
    printf("\nIntroduceti 5 valori pentru tablou:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", pointer_arr + i);
    }

    // Se afiseaza elementele modificate
    printf("\nElementele modificate ale tabloului:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0 ;
 }
