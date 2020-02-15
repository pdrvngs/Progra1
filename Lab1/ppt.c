#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int punteo1;
int punteo2;

char playgame(int num, int choice){


    if (num==1 && choice == 2){
        printf("Ganador tu");
        punteo1++;
    }else if(num==2 && choice == 3){
        printf("Ganador tu");
        punteo1++;
    }else if(num == 3 && choice ==2){
        printf("Ganador tu");
        punteo1++;
    }else if(num==1 && choice == 3){
        printf("Ganador computadora");
        punteo2++;
    }else if(num == 2 && choice ==1){
        printf("Ganador computadora");
        punteo2++;
    }else if(num==3 && choice ==1){
        printf("Ganador computadora");
        punteo2++;
    }else if(num==choice) {
        printf("Empate");
    }else if(choice==4){
        printf("Gracias por jugar!");
    }else {printf("Numero Invalido");}

    printf("\nComputadora: %d || Tu: %d", punteo2, punteo1);
    printf("\n\n");

}


int main() {
    srand(time(0));
    int num = (rand() % (4-1))+1;
    int choice = 0;

    while (choice != 4) {
        printf("Escoja \n1. piedra,\n2. papel,\n3. tijera"
              "\n4. Terminar juego\nTu escojes: ");
        scanf("%d", &choice);
        printf("La computadora escoje: %d\n", num);

        playgame(num, choice);
    }

    return 0;
}
