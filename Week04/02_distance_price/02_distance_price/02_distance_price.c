#include <stdio.h>
#include <conio.h>

void main() {



	int mesafe;
	int ucret;

	printf("Gidilen Mesafeyi Giriniz: ");
	scanf_s("%d", &mesafe);

	if (mesafe <= 100)
	{
		ucret = mesafe * 9 / 100 + 10;
		printf("Ucret: %d TL \n", ucret);
	}
	else {
		ucret = mesafe * 6 / 100 + 10;
		printf("Ucret: %d TL \n", ucret);
	}
}