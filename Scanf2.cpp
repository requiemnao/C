#include <stdio.h>
int main()
{
	int first= 0, second= 0, third= 0;
	printf("Declare tres numeros inteiros entre virgulas :");
	scanf("%d,%d,%d", &first, &second, &third);
	printf("Primeiro numero %d, segundo numero %d, terceiro numero %d.\n", first, second, third);
	return 0;
}
// as vírgulas entre os "%d,%d,%d" limita a escrita dos numeros em  x, y, z portanto se não haver virgulas entre os números o resultado dará errado.
// se tirarmos as virgulas e deixar "%d%d%d" podemos escrever os numeros de qualquer forma contendo espaço  x      y c e dará o resultado esperado.
