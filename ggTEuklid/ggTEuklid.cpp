#include <stdio.h>

int main() {
	int a; 
	int b;

	printf("Erste Zahl: ");
	scanf_s("%d", &a);
	printf("Zweite Zahl: ");
	scanf_s("%d", &b);

	while (a != b) {
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	printf("Der ggT lautet: %d", a);

	return 0;
}