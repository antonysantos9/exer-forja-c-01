#include<stdio.h>
#include<stdlib.h>

int main(){

    float numero1, numero2, respostaSoma;
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    respostaSoma = numero1 + numero2;
    printf("A soma dos nuimeros é: %.2f \n", respostaSoma);

    system("pause");
    return 0;
}
