#include <stdio.h>
#include <string.h>


int reverse(char string[1000]) {
    int begin, end, count = 0;

// Calculating string length

    char r[1000];
    while (string[count] != '\0')
        count++;

    end = count - 1;

    for (begin = 0; begin < count; begin++) {
        r[begin] = string[end];
        end--;
    }

    r[begin] = '\0';

    printf("%s\n", r);

    return 0;
}


int main(void){

    int given;
    int remain;
    char binary[100];
    int i = 0;
    printf("Ingresa tu numero: ");
    scanf("%d", &given);

    while(given > 0){
        remain = given % 2;
        if(remain == 1){
            binary[i] = '1';
            given = given/2;
        }
        else { // add a 1}
            given = given/2;
            binary[i] = '0';
        }
        i++;
    }

    reverse(binary);
    return 0;
}
