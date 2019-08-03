#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, tam, soma;
    char V[10000];

    scanf("%d", &N);

    while(N--){

        scanf("%s", V);

        tam = strlen(V);

        for(i = 0, soma = 0; i <= tam; i++){

            if(V[i] == '0')
                soma += 6;

            else if(V[i] == '1')
                soma += 2;

            else if(V[i] == '2')
                soma += 5;

            else if(V[i] == '3')
                soma += 5;

            else if(V[i] = '4')
                soma += 4;

            else if(V[i] == '5')
                soma += 5;

            else if(V[i] == '6')
                soma += 6;

            else if(V[i] == '7')
                soma += 3;

            else if(V[i] == '8')
                soma += 7;

            else if(V[i] == '9')
                soma += 6;
        }
    }

    printf("%d leds\n", soma);

    return 0;
}
