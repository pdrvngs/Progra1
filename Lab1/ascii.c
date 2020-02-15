#include <stdio.h>

int ascii(void) {

    int num;

    printf("Ingrese un numero \n");
    scanf("%d", &num);

    if(num > 0) {
        printf("*\n**\n***\n****\n*****");
    }

    return 0;
}