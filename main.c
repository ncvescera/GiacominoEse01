#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char a = 0;
    char b = 0;
    char c = 0;
    char d = 0;
    
    printf("Inserisci 4 caratteri: ");
    scanf("%c%c%c%c",&a,&b,&c,&d);
    
    printf("I relativi codici sono: \n");
    printf("%c:\t%i\n",a,(int)a);
    printf("%c:\t%i\n",b,(int)b);
    printf("%c:\t%i\n",c,(int)c);
    printf("%c:\t%i\n",d,(int)d);
    
    return (EXIT_SUCCESS);
}