#include <stdio.h>
#include <string.h>

int main(){

    int N, i, led;
    int tam, j;
    char V[1000];


    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%s", &V);
        tam = strlen(V);
        led = 0;

        for(j = 0; j < tam; j++){

            if(V[j] == '1'){
                led += 2;
            }

            if(V[j] == '2'){
                led += 5;
            }

            if(V[j] == '3'){
                led += 5;
            }

            if(V[j] == '4'){
                led += 4;
            }

            if(V[j] == '5'){
                led += 5;
            }

            if(V[j] == '6'){
                led += 6;
            }

            if(V[j] == '7'){
                led += 3;
            }

            if(V[j] == '8'){
                led += 7;
            }

            if(V[j] == '9'){
                led += 6;
            }

            if(V[j] == '0'){
                led += 6;
            }
        }
        printf("%d leds\n", led);
    }

    return 0;
}
