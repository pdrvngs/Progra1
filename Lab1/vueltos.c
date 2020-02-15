#include <stdio.h>
#include <math.h>


int numero_cuartos(float entrada){
    int cuartos = entrada / .25;
    return(cuartos);
}

int numero_diez(float entrada){
    int diez = entrada / .10;
    return(diez);
}

int numero_cincos(float entrada){
    int cincos = entrada / .05;
    return(cincos);
}

int numero_unos(float entrada){
    int unos = round(entrada / .01);
    return(unos);
}

int vuelto() {
    float entrada;
    int cuartos;
    int diez;
    int cincos;
    int unos;
    // float cuartos = .25;
    // float diez = .10;
    // float cincos = .5;
    // float unos = .1;


    printf("Enter: ");
    scanf("%f", &entrada);
    cuartos = numero_cuartos(entrada);
    entrada = entrada - (.25 * cuartos);
    printf("%d cuartos \n",cuartos);

    diez = numero_diez(entrada);
    entrada = entrada - (.1 * diez);
    printf("%d diezes \n", diez);

    cincos = numero_cincos(entrada);
    entrada = entrada - (.05 * cincos);
    printf("%d cincos \n", cincos);

    unos = numero_unos(entrada);
    entrada = entrada - (.01 * unos);
    printf("%d unos \n", unos);


    return 0;
}

