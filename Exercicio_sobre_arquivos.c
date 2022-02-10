#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

/*
Problema: ler um arquivo contendo um texto em minúsculo
e criar outro arquivo com o texto em maiúsculo
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *texto1, *texto2;
    texto1 = fopen("..\\linguagem C\\minusculo.txt", "r");
    texto2 = fopen("..\\linguagem C\\maiusculo.txt", "w");
    if(texto1 == NULL || texto2 == NULL){
        printf("ERRO!");
        exit(1);
    }
    char aux = fgetc(texto1);
    while(aux != EOF){
        fputc(toupper(aux), texto2);
        aux = fgetc(texto1);
    }
    fclose(texto1);
    fclose(texto2);
    return 0;

}
