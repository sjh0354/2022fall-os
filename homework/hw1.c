#include<stdio.h>

int main(){
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (i <= 5) {
			sum = sum + 2;
			sum = sum * 2;
		}
		else {
			sum = sum - 2;
			sum = sum / 2;
		}
	}
	printf("%d", sum);
}