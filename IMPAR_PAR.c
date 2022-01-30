#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"Portuguese");
    int escolha, num[4], i;
    printf("--------DESCOBRINDO SE É ÍMPAR OU PAR--------\n");
    printf("DIGITE 4 NÚMEROS:\n");
    for(i=0; i<4; i++){
        scanf("%d", &num[i]);
    }
    system("cls");
    //testando se é impar ou par
    for(i=0; i<4; i++){
        if(num[i]%2==0)
            printf("NÚMERO %d É PAR!\n", num[i]);
        else
            printf("NÚMERO %d É ÍMPAR!\n", num[i]);
    }
	return 0;
}
