// 程序1:
#include <stdio.h>
#include <time.h>

int main(void){   

    clock_t start, end;
    double time_used;
    start = clock();        //记录程序开始时间

    int i, N = 500;
    long J = 1;
    double S = 1;
    for(i = 0; i < N; i++) {
        J = J + 1;
        S = S + 1.0 / J;
    }
    printf("S=%lf\n", S);

    end = clock();      //记录程序结束时间
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("程序运行时间：%1f秒 \n", time_used);

    return 0;
}


// 程序2：
#include <stdio.h>
#include <time.h>

int main(void){

    clock_t start, end;
    double time_used;
    start = clock();        //记录程序开始时间

    int i1, i2, N = 500;
    long J = 1;
    double S = 1;

    for (i2 = 0; i2 < N; i2++) {
        for (i1 = 0; i1 < N; i1++) {
            J = J + 1;
            S = S + 1.0 / J;
        }
    }
    printf("S=%lf\n", S);

    end = clock();      //记录程序结束时间
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("程序运行时间：%.6f秒 \n", time_used);

    return 0;
}


// 程序3：
#include <stdio.h>
#include <time.h>

int main(void){

    clock_t start, end;
    double time_used;
    start = clock();        //记录程序开始时间

    int i1, i2, i3, N = 500;
    long J = 1;
    double S = 1;
    for (i3 = 0; i3 < N; i3++) {
        for (i2 = 0; i2 < N; i2++) {
            for (i1 = 0; i1 < N; i1++) {
                J = J + 1;
                S = S + 1.0 / J;
            }
        }
    }
    printf("S=%lf\n", S);

    end = clock();      //记录程序结束时间
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("程序运行时间：%.6f秒 \n", time_used);

    return 0;
}
