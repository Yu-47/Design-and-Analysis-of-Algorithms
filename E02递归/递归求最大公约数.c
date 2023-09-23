//递归求两个数的最大公约数
//The greatest common divisor of 24 and 30 is 6
#include <stdio.h>
#include <stdlib.h>

int GCD(int m, int n)
{	
	if (m % n == 0)
		return n;
	else
		return GCD(n, m % n);
}
int main(void)
{
	int m = 24; int n = 30;
	printf(" (%d, %d) = %d\n\n", m, n, GCD(m, n));

	return 1;
}
