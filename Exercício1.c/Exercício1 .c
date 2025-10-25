#include <stdio.h>
  int main(){
    int valor;
     
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor < 0 || valor >10){
        printf("Valor invalido\n");
    } else {
        printf("Valor correto\n");
    }

    return 0;
  }