#include <stdio.h>
#include <conio.h>

void main() {

	int direnc, akim, voltaj;

	printf("Direnc: ");
	scanf_s("%d", &direnc);


	while (direnc > 0)
	{
		printf("Akim: ");
		scanf_s("%d", &akim);

		voltaj = direnc*akim;
		printf("Voltaj: %d\n", voltaj);

		printf("Direnc: ");
		scanf_s("%d", &direnc);
	}
	printf("- Girildi\n");

}