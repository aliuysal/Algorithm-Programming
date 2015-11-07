#include <stdio.h>
#include <conio.h>

void main() {
	float vize, final, proje, odev, bn;

	printf("Vize Notunu Giriniz!");
	scanf_s("%f", &vize);

	printf("Final Notunu Giriniz!");
	scanf_s("%f", &final);

	printf("Proje Notunu Giriniz!");
	scanf_s("%f", &proje);

	printf("Odev Notunu Giriniz!");
	scanf_s("%f", &odev);

	bn = vize + final + proje + odev / 4;

	if (100 > bn >= 90)
	{
		printf("Basari Notunuz: A1");
	}
	else if (90 > bn >= 80)
	{

	}
}