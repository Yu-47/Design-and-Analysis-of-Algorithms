# include<stdio.h>
# include<stdlib.h>
# include<math.h>

# define Fn(x) ( sin(x) - cos(x) )

double Err = 0.0001;

// 二分法求函数的根
double FindRoot( double a, double b ) {

	// a和b是区间，b-a小于Err，说明找到了一个很小的区间
	if ( fabs(b - a) < Err ) {
		return ( a + b ) / 2;
	}

	// 根是端点a
	double ya = Fn(a);
	if (fabs(ya) < Err) {
		return a;
	}
	
	// 根是端点b
	double yb = Fn(b);
	if (fabs(yb) < Err) {
		return b;
	}

	// a和b的函数值是异号，才有根
	if (ya * yb > 0) {
		printf("在[%.6f, %.6f]内没有根\n", a, b);
		return -99999.99;
	}

	double mid = (a + b) / 2;
	double ym = Fn(mid);

	if (fabs(ym) < Err) {
		// 根是中点mid
		return mid;
	}
	else {
		// 判断中点和哪个端点异号，使用了递归调用
		if (ym * ya > 0) {
			return FindRoot(mid, b);
		}
		else {
			return FindRoot(a, mid);
		}
	}
	
	return 0;
}


int main(void) {

	double a = 0;
	double b = 3.1416;
	double Root = FindRoot(a, b);

	printf("根是%.8f\n", Root);

	system("pause");

	return 0;

}