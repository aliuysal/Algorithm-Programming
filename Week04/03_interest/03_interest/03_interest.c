#include <stdio.h>
#include <conio.h>

void main() {

	float para;
	float faiz;
	int sure = 2009;

	printf("Miktari Giriniz: ");
	scanf_s("%f", &para);

	while (sure < 2016)
	{
		sure++;
		faiz = para * 20 / 100;
		para = para + faiz;
	}
	printf("Yeni Para: %.2f\n", para);
}