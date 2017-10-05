
#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(int argc, char** argv) {
    int tempo;
    int ttemp = 0;
    int resto = 0;
    
    int conversione[MAX];
    
    printf("Inserisci l'intervallo di tempo: ");
    scanf("%d",&tempo);
    
    ttemp = tempo;
    
    int i = 0;
    do{
        resto = ttemp % 60;
        ttemp /= 60;
 
        conversione[(MAX-1)-i] = resto;
        
        i++;
    }while(ttemp != 0);
    
    printf("%d secondi sono: ",tempo);
    printf("h: %d m: %d s: %d", conversione[0], conversione[1], conversione[2]);

    return (EXIT_SUCCESS);
}

