#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Problema: ler um arquivo que contém strings(ex: '1 2 3 4') e converter para inteiro para poder realizar a soma. Imprima o resultado na tela.
*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    //abrindo o documento
    FILE *f = fopen("doc.txt", "r");
    //verificação se conseguiu abrir o arquivo
    if(f == NULL){
        printf("falha ao abrir o arquivo");
        exit(1);
    }
    //lendo caractere por caractere
    char c = fgetc(f);
    int soma = 0;
    while(c != EOF){
        printf("%c", c);
        if (c != ' ')
            //convertendo o valor recebido em um número do tipo int e somando o resultado
            soma += c - '0';
        c = fgetc(f);
    }
    printf("Soma = %d\n", soma);
    return(0);
}
