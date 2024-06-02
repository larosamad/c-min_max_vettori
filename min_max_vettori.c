/* Chiedi una sequenza di 10 valori
memorizali in un vettore
calcola minimo e massimo
stampa i due valori*/
#include <stdio.h>
int numero[10];
int i;
int minimo, massimo;

int main (void){

    for (i=0; i<10; i++){
            printf("Inserisci numero\n");
            scanf("%d", &numero[i]);

            if(i==0){
            minimo = numero[0];
            massimo = numero[0];
            }

            if (numero[i]<minimo){
                minimo = numero[i];
            } else {
                if (numero[i] >= massimo) {
                    massimo = numero[i];
                }
            }
    }
    printf("Il minimo è %d e il massimo è %d", minimo, massimo);    
    return 0;
}