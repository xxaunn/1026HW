#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("enter the size of the diamond:");
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		for (int j = n-1;j > i;j--) {
			printf(" ");
		}
		for (int j = n;j >=n-2*i;j--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n-1;i > 0;i--) {
		for (int j = 1;j <= n-i ;j++) {
			printf(" ");
		}
		for (int j = 1;j < 2*i;j++) {
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
