#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definizione della costante Pigreco
#define PI 3.14159

//intestazione delle funzioni
double calcVolume(double raggio);
double calcSfera(double raggio);

int main(int argc, char** argv) {
    //raggio della circonferenza/sfera
    double raggio   = 0;
    double volume   = 0;
    double sfera    = 0;
    
    printf("Inserisci il raggio: ");
    scanf("%lf",&raggio);
    
    //calcolo volume
    volume = calcVolume(raggio);
    
    //calcolo sfera
    sfera = calcSfera(raggio);
    
    printf("Il Volume è: %g\n",volume);
    printf("La superfice della Sfera è: %g\n",sfera);
    
    return (EXIT_SUCCESS);
}

double calcVolume(double raggio){
    double volume = 0;
    
    volume = ((4.0/3.0)*PI)*pow(raggio,3);
    
    return volume;
}

double calcSfera(double raggio){
    double sfera = 0;
    
    sfera = 4*PI*pow(raggio,2);
    
    return sfera;
}

