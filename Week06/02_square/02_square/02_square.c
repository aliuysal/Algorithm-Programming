#include <stdio.h>

	void main() {

	int i, n, j;

	printf("N gir: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
	for (j = 1; j <= n; j++)
	{
	printf("* ");
	}
	printf("\n");
	}
}