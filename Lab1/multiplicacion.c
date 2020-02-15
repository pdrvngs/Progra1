#include <stdio.h>



int main(void){
    int i = 0;
    int mult;
    int result = 1;

    printf("Ingrese numero para generar tabla: ");
    scanf("%d", &mult);
    while (i < 10){
        result = mult*i;
        printf("%d %d\n", i,result);
        i++;

    }

    return 0;
}