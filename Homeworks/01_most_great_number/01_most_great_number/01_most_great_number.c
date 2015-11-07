#include <stdio.h>

void main() {
	float x, y, z;

	printf("Bir X Degeri Giriniz: ");
	scanf_s("%f", &x);
	printf("Bir Y Degeri Giriniz: ");
	scanf_s("%f", &y);
	printf("Bir Z Degeri Giriniz: ");
	scanf_s("%f", &z);
	if (x > y && x > z)
	{
		printf("En Buyyuk Deger X tir\n");
	}
	else if (y > x && y > z)
	{
		printf("En Buyyuk Deger Y tir\n");
	}
	else if (z > x && z > y)
	{
		printf("En Buyyuk Deger Z tir\n");
	}
	else {
		printf("Degerler Esittir\n");
	}
}