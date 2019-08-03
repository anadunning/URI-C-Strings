#include <stdio.h>
#include <string.h>

int main(){

    int N, i, j;
    int tam1, tam2;
    int maior;
    char str1[60];
    char str2[60];

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%s %s", &str1, &str2);

        // To combine two strings, I need to know their length.
        tam1 = strlen(str1);
        tam2 = strlen(str2);

        // What is the size of the larger string?
        if(tam1 < tam2){
            maior = tam2;
        }
        else {
            maior = tam1;
        }

        for(j = 0; j < maior; j++){

            if(j < tam1){
                printf("%c", str1[j]);
            }

            if(j < tam2){
                printf("%c", str2[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
