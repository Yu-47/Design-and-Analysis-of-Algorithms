#include<stdio.h>

int splitInteger(int a, int b) {
	// 输出整数n有多少种划分方式

	if (a == 1 || b == 1) {
		return 1;
	}
	else if ( a < b) {
		return splitInteger(a, a);
	}
	else if ( a == b ) {
		return 1 + splitInteger(a, a - 1);
	}
	else {
		return splitInteger(a, b - 1) + splitInteger(a - b, b);
	}
}

int main(void) {
	
	int n;
	do {
		printf("请输入希望划分的那个整数:");
		scanf_s("%d", &n);

		if (n < 0) {
			printf("请输入大于等于0的数！\n");
		}
	} while (n < 0);

	printf("%d的不同划分方式有%d种\n", n, splitInteger(n, n));
	
	return 0;
}

