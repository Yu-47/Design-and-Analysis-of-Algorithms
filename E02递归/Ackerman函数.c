#include<stdio.h>

int Ackerman(int a, int b) {
	// 输出Ackerman函数的值

	if (a == 1 && b == 0) {
		return 2;
	}
	else if (a == 0) {
		return 1;
	}
	else if (b == 0) {
		return a + 2;
	}
	else {
		return Ackerman(Ackerman(a - 1, b), b - 1);
	}

	return 0;
}

int main(void) {
	
	int m, n;

	do {
		printf("请输入m:");		scanf_s("%d", &m);
		printf("请输入n:");		scanf_s("%d", &n);

		if (m < 0 || n < 0 || ( m == 0 && n == 0 )) {
			printf("请输入大于等于0的m和n的值，而且m和n不能同时为0！\n");
		}
	} while (m < 0 || n < 0 || (m == 0 && n == 0));

	printf("Ackerman(%d, %d)的值为%d", m, n, Ackerman(m, n));
	
	return 0;
}

