#include <stdio.h>
#include <stdlib.h>

#define MAX 13

int somma(int array[]);                                     //somma tutte le celle di un arry
void explodeEban(long long int eban, int *array);           //popola un arry con le singole cifre del codice eban      
void splitExplodedEban(int *eban, int *pari, int *dispari); //popola 2 array con le cifre dispari e pari del codice eban    

int main(int argc, char** argv) {
    long long int eban = 6004840690104;
    
    int cifre[MAX];
    int pari[MAX/2];
    int dispari[MAX/2];
    
    int m,n;
    
    int check;
    
    explodeEban(eban,cifre);                      
    splitExplodedEban(cifre,pari,dispari);
    
    m = somma(pari);
    n = somma(dispari);
    
    check = n+(3*m);
    
    if(((check+cifre[MAX-1])%10) == 0){
        printf("Il codice è corretto");
        return (EXIT_SUCCESS);
    }
    else{
        printf("Il codice è errato");
        return (EXIT_FAILURE);
    }    
}

int somma(int array[]){
    int somma = 0;
    for(int i = 0; i<MAX/2;i++){
        somma += array[i];
    }
    
    return somma;
}

void explodeEban(long long int eban, int *array){   //passaggio di array per riferimento  
    int resto = 0;
    int i = 0;
    
    do{
        resto = eban%10;
        eban /= 10;
        
        array[(MAX-1)-i] = resto;
        
        i++;
    }while(eban != 0);
}

void splitExplodedEban(int *eban, int *pari, int *dispari){ //passaggio di array per riferimento  
    int i = 0;
    int k = 0;
    int j = 0;
    
    for(i;i<MAX-1;i++){
        if(((i+1)%2) == 0){
            pari[j] = eban[i];
            j++;
        }
        else{
            dispari[k] = eban[i];
            k++;
        }
    }
}