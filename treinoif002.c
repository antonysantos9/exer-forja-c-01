#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
     setlocale(LC_ALL, "portuguese");

    int idade1, idade2;
    printf("Informe a primeira idade: ");
    fflush(stdin);
    scanf("%d", &idade1);
  printf("Informe a segunda idade: ");
 scanf("%d", &idade2);

 if(idade1 > idade2){
    printf("a primeira idade informada e maior que a segunda");
 }else if(idade1 < idade2){
    printf("a segunda idade informada e maior que a primeira");
 }else{
    printf("as idaddes sao iguais");
 }

     system("pause");
    return 0;
}