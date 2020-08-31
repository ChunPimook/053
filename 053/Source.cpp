#include <stdio.h>
int main() {
	int a, b,c;
	scanf_s("%d %d", &a, &b);
	if (a == 0 && b <= 59) {
		if (b >= 0) {
			printf("Free");
		}
		else if (b < 0) {
			printf("It can't be negative");
		}
	}
	else if (a == 1 && b ==0) {
		printf("Free");
	}
	else if (a < 0 || b < 0) {
		printf("It can't be negative");
	}
	else {
		int c = a * 30;
		if (b > 0) {
			c += 30;
		}
		c -= 30;
		printf("%d", c);
	}
}