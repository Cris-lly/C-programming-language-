#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"Portuguese");
    int escolha, num[4], i;
    printf("--------DESCOBRINDO SE � �MPAR OU PAR--------\n");
    printf("DIGITE 4 N�MEROS:\n");
    for(i=0; i<4; i++){
        scanf("%d", &num[i]);
    }
    system("cls");
    //testando se � impar ou par
    for(i=0; i<4; i++){
        if(num[i]%2==0)
            printf("N�MERO %d � PAR!\n", num[i]);
        else
            printf("N�MERO %d � �MPAR!\n", num[i]);
    }
	return 0;
}
