#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *pont;
    pont = fopen("..\\linguagem C\\ola.txt", "w");
    if(pont == NULL){
        printf("ERRO!");
        exit(1);
    }
    //escrevendo em um arquivo caractere por caractere:
    char texto[25] = "gravando usando fputc()";
    int i;
    for(i = 0; i  < strlen(texto); i++)
        fputc(texto[i], pont);

    //escrevendo em um arquivo através de string
    char string[30] = " Gravando através de fputs()";
    int retorno = fputs(string, pont);
    if(retorno == EOF)
        printf("Erro na gravação");
    fclose(pont);
    return 0;

}
