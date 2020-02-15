#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


void game(){


    int num_com = (rand() % 99)+1;
    int num;
    int intentos = 1;
    printf("Adivina el numero en el que estoy pensando... \n");
    printf("Escoje un numero: ");
    scanf("%d", &num);

    while(num != num_com) {
        if (num > num_com){
            printf("Mas bajo\n");
            printf("Vuelve a intentar: ");
            intentos++;
            scanf("%d", &num);
        } else if (num < num_com){
            printf("Mas arriba\n");
            printf("Vuelve a intentar: ");
            scanf("%d", &num);
            intentos++;
        }
        if (num == num_com){
            break;
        }


    }
    printf("Felicitaciones\n");
    printf("Te tomo %d intentos\n", intentos);

}


int main(void){
    printf("Adivinia un numero entre 1 y 100. Solo ingresa tu numero para jugar!\n");
    srand(time(0));
    char choice;
    while(choice) {

        if (tolower(choice) != (char)'n') {
            game();
            printf("Quieres volver a jugar? [y/n] ");
            scanf(" %c", &choice);
        } else { break; }
    }
    return 0;
}
