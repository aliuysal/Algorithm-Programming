#include <stdio.h>
#include <conio.h>

void main() {
	int x, y;
	printf("X Eksenini Giriniz: ");
	scanf_s("%d", &x);
	printf("Y Eksenini Giriniz: ");
	scanf_s("%d", &y);

	if (x>0 && y>0)
	{
		printf("Girdiginiz Deger 1.Bolgede!\n");
	}
	else if (x<0 && y>0)
	{
		printf("Girdiginiz Deger 2.Bolgede!\n");
	}
	else if (x<0 && y<0)
	{
		printf("Girdiginiz Deger 3.Bolgede!\n");
	}
	else if (x>0 && y<0)
	{
		printf("Girdiginiz Deger 4.Bolgede!\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("Girdiginiz Deger Merkez Noktasi!\n");
	}
}