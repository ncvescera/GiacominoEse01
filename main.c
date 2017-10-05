#include <stdio.h>
#include <stdlib.h>

float CalcM(float x1, float y1, float x2, float y2);
float CalcQ(float x1, float y1, float x2, float y2);

int main(int argc, char** argv) {
    float m;
    float q;
    
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    
    printf("Inserisci le coordinate del primo Punto(separati da uno spazio): ");
    scanf("%f %f",&x1, &y1);
    
    printf("Inserisci le coordinate del secondo Punto (separati da uno spazio): ");
    scanf("%f %f",&x2, &y2);
    
    m = CalcM(x1,y1,x2,y2);
    q = CalcQ(x1,y1,x2,y2);
    
    printf("Il coefficiente m è: %g\n",m);
    printf("Il termine note q è: %g\n",q);
    
    return (EXIT_SUCCESS);
}

float CalcM(float x1, float y1, float x2, float y2){
    float m;
   
    m = (y2-y1)/(x2-x1);
   
    return m;
}

float CalcQ(float x1, float y1, float x2, float y2){
    float q;
    
    q = ((y1*x2)-(y2*x1))/(x2-x1);
    
    return q;
}
