#include <stdio.h>
int main()
{
    int number;
    int numbert= 0;
    int result=0;
    printf(" coloque um numero qualquer para o resultado da tabuada: ");
    scanf("%d", &number);
    int i;
    printf("resultado:\n");
    for(i=0;i<11;i++){
    	printf("%dx%d = %d \n", number, numbert, result);
    	numbert= numbert + 1;
    	result= number*numbert;
	}
	return 0;
}
// tabuada de qualquer número que seja inteiro
