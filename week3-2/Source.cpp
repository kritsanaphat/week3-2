#include<stdio.h>
void Plus(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}
void Minus(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
}
void Multiplied(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}
void Divide(int a, int b) {
	float c;
	c = (float)a / b;
	printf("%d / %d = %f\n", a, b, c);
}
int main() {
	int i, num1, num2;
	do {
		printf("Calculate\n");
		printf("1 Plus\n");
		printf("2 Minus\n");
		printf("3 Multiplied\n");
		printf("4 Divide\n");
		printf("5 Exit\n");
		printf("Select choice :");
		scanf_s("%d", &i);

		if (i < 1 || i>5) printf("Enter 1-5 only\n");
		else if (i == 5) break;
		else {
			printf("Enter number1 :");
			scanf_s("%d", &num1);
			printf("Enter number2 :");
			scanf_s("%d", &num2);
			if (i == 1) {
				Plus(num1, num2);
			}
			else if (i == 2) {
				Minus(num1, num2);
			}
			else if (i == 3) {
				Multiplied(num1, num2);
			}
			else if (i == 4) {
				Divide(num1, num2);
			}
		}
	} while (i != 5);
}