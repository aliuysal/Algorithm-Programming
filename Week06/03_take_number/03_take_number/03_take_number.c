#include <stdio.h>

void main() {
	int sayi, adet, toplam, buyuk, kucuk;
	printf("Sayi Gir: ");
	scanf_s("%d", &sayi);
	adet = 0;
	toplam = 0;
	buyuk = sayi;
	kucuk = sayi;
	do
	{
		adet++;
		toplam += sayi;
		if (sayi < kucuk)
			kucuk = sayi;
		if (sayi > buyuk)
			buyuk = sayi;
		printf("Sayi Gir: ");
		scanf_s("%d", &sayi);
	} while (sayi != -1);
	printf("%d Tane Sayi Girdiniz\n", adet);
	printf("Toplam: %d\n", toplam);
	printf("Ortalama: %d\n", toplam / adet);
	printf("En Buyuk: %d\n", buyuk);
	printf("En Kucuk: %d\n", kucuk);
}
