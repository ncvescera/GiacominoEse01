#include <stdio.h>
#include <stdlib.h>

#define MAX 15

int main(int argc, char** argv) {
    int numero = 0;
    short int binary[MAX];
    short int resto = 0;
    
    printf("Inserisci un numero tra 0 e 15: ");
    scanf("%d",&numero);
    
    int tnum = numero;
    
    int i = 0;
    if(numero >= 0 && numero <= 15){
        do{
            resto = tnum%2;
            tnum /= 2;
            
            binary[i] = resto;
           
            i++;       
        }while(tnum != 0);
        
        for(i ; i>0; i--){
            printf("%hd",binary[i-1]);
        }
    }
    else{
        printf("Error! Incorrect number.");
        return (EXIT_FAILURE);
    }
    
    return (EXIT_SUCCESS);
}

