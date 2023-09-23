# include<stdio.h>
# include<stdlib.h>

// 递归方法
int FiBoNaQi( int n ) {

	// 边界条件
	if (n == 0 || n == 1) {
		return 1;
	}

	return FiBoNaQi(n - 1) + FiBoNaQi(n - 2);

}


// 不用递归
int fbnq(int n) {

	int p1 = 1;		// 斐波那契数列第一项
	int p2 = 1;
	int FN = 0;		// 用户需要的第n项数字

	int i;
	for (i = 3; i <= n; i++) {
		
		FN = p1 + p2;
		p1 = p2;		// 更新p1
		p2 = FN;		// 更新p2
	
	}
	
	FN = p1 + p2;

	return FN;

}


int main(void) {

	int N = 100;
	int fn = 0;
	fn = fbnq(N);

	printf("第%d项是%d\n", N, fn);

	system("pause");

	return 0;

}