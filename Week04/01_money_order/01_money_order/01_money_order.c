#include <stdio.h>
#include <conio.h>

void main() {

	float havale, komisyon;

	printf("Havale Miktarini Giriniz: ");
	scanf_s("%f", &havale);
	if (havale <= 100)
	{
		komisyon = havale / 100;
		printf("Yatirilacak Miktar: %.2f\n", havale + komisyon);
	}
	else //if (havale > 100)
	{
		komisyon = havale / 50;
		printf("Yatirilacak Miktar: %.2f\n", havale + komisyon);
	}
}