#include <stdio.h>
/*
Sa se scrie un program in care se citeste de 
la tastatura o valoare care reprezinta o temperatura 
reprezentata in grade Celsius. Sa se afiseze, 
la alegerea utilizatorului, temperatura in grade Celsius 
sau in grade Fahrenheit. Obs. grd°F = 9/5 * grd°C +32; */
int main() {
    float temp, copie;
    printf("Introdu temperatura: ");
    scanf("%f", &temp);

    copie = temp; // Salvăm o copie a temperaturii inițiale

    // Calculăm temperatura în grade Fahrenheit
    temp = 9.0 / 5.0 * temp + 32;

    printf("Temperatura %.2f in grade Celsius este in grade Fahrenheit %.2f\n", copie, temp);

    return 0;
}
