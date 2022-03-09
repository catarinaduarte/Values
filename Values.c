#include <stdio.h>

int main()
{
    int v1, v2;
    printf("Valor 1:");
    scanf("%d", &v1);
    printf("Valor 2:");
    scanf("%d", &v2);

    if(v1 == v2){
        printf("Os valores %d e %d são iguais.", v1, v2);
    }   
    else {
        printf("Os valores %d e %d são diferentes.", v1, v2);
        if(v1 > v2){
            printf("\nO maior valor é: %d e o menor é: %d.", v1, v2);
        }
        else{
            printf("\nO maior valor é: %d e o menor é: %d.", v2, v1);
        }
    }
}