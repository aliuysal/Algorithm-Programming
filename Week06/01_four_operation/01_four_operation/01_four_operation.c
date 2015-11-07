#include <stdio.h>

void main() {

	int sayi1;
	int sayi2;
	char islem;

	printf("1. Sayiyi Giriniz: ");
	scanf_s("%d", &sayi1);
	printf("2. Sayiyi Giriniz: ");
	scanf_s("%d", &sayi2);
	printf("Islem'i Seciniz\n");
	islem = getch();

	switch (islem)
	{
	case '+':
	printf("Toplami: %d\n", sayi1+sayi2);
	break;
	case '-':
	printf("Fark: %d\n", sayi1-sayi2);
	break;
	case '*':
	printf("Carpim: %d\n", sayi1*sayi2);
	break;
	case '/':
	printf("Bolumu: %d\n", sayi1/sayi2);
	break;
	default:
	printf("Yanlis Giris\n");
	break;
	}

}
