#include <stdio.h>
#include <conio.h>

void main() {
	int sayi, yuzler, onlar, birler;

	printf("3 Basamakli Sayiyi Giriniz");
	scanf_s("%d", &sayi);
	yuzler = sayi / 100;
	onlar = (sayi % 100) / 10;
	birler = sayi % 10;
	if (birler + yuzler == onlar)
	{
		printf("Birler+Yuzler Basamagi Onlar Basamagina Esittir!\n");
	}
	else {
		printf("Birler+Yuzler Basamagi Onlar Basamagina Esit Degildir!\n");
	}
}