#include <stdio.h>
int main ()
{
	int resp = 0;
	printf("Qual sua idade?\n");
	scanf("%d", &resp);
	printf("Voce tem %d anos , sua idade sera guardada no banco de dados.\n",resp);
	return 0;
}
// aparentemente o scanf só dá para usar com números.
// visto que tentei por um nome como resposta e o print saiu com números.
// declarei a variável resp igual a 0 por que se eu não declarar quando eu digitar uma letra ele irá dar o número 37.
