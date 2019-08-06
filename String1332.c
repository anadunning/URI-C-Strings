#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n, i;
    char word[6];

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%s", word);

        if(strlen(word) == 5){
            printf("3\n");

        }
        else if((word[0] == 't' && word[1] == 'w') || (word[0] == 't' && word[2] == 'o') || (word[1] == 'w' && word[2] == 'o')){
                printf("2\n");

        }
        else {
            printf("1\n");
        }
    }

    return 0;
}
