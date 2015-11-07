#include <stdio.h>
#include <conio.h>

void main() {
	int a;
	printf("Sayiyi Gir: ");
	scanf_s("%d", &a);

	if (a % 2 == 1)
	{
		printf("Girdiginiz Deger Tek\n");
	}
	else
	{
		printf("Girdiginiz Deger Cift\n");
	}
}