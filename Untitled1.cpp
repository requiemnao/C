#include <stdio.h>
int main()
{
	int first= 0, second= 0, third= 0;
	printf("Declare tres numeros inteiros entre virgulas :");
	scanf("%d,%d,%d", &first, &second, &third);
	printf("Primeiro numero %d, segundo numero %d, terceiro numero %d.\n", first, second, third);
	return 0;
}
// as v�rgulas entre os "%d,%d,%d" limita a escrita dos numeros em  x, y, z portanto se n�o haver virgulas entre os n�meros o resultado dar� errado.
// se tirarmos as virgulas e deixar "%d%d%d" podemos escrever os numeros de qualquer forma contendo espa�o  x      y c e dar� o resultado esperado.
