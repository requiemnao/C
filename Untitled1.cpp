#include <stdio.h>
int main ()
{
	int resp = 0;
	printf("Qual sua idade?\n");
	scanf("%d", &resp);
	printf("Voce tem %d anos , sua idade sera guardada no banco de dados.\n",resp);
	return 0;
}
// aparentemente o scanf s� d� para usar com n�meros.
// visto que tentei por um nome como resposta e o print saiu com n�meros.
// declarei a vari�vel resp igual a 0 por que se eu n�o declarar quando eu digitar uma letra ele ir� dar o n�mero 37.
