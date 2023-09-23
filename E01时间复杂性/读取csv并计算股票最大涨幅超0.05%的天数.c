#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    // *以下打开csv文件的代码引用了他人代码并做出部分改变，来源：https://www.cnblogs.com/mengxinayan/p/22-02-read-write-csv-in-c-1.html
    FILE* csvFile;
    const char* filename = "C:\\ForFiles\\大学课程\\大四上课程资料\\算法设计与分析\\课程作业\\9.18E01时间复杂性\\北证50股票行情.csv";
    const char* mode = "r";
    
    fopen_s(&csvFile, filename, mode);      // 读取CSV文件
    char line[80];
    double fluctuation[80];                 // 涨幅数据储存在fluctuation数组中
    int count = 0;
    while (fgets(line, 80, csvFile)) {
        double value = atof(line);          // 将读取的字符串转换为 double
        fluctuation[count] = value;         // 存储到数组中
        count++;
    }
    fclose(csvFile);        // 关闭文件
    // *引用结束

    int max = 0;            // 最大连续上涨天数
    int current = 0;            // 当前连续上涨天数

    for (int i = 0; i < 80; i++) {
        if (fluctuation[i] >= 0.05) {
            current++;
        } 
        else {
            // 如果涨跌幅不大于等于0.5%，重置当前连续上涨天数
            current = 0;
        }

        // 更新最大连续上涨天数
        if (current > max) {
            max = current;
        }
    }
    printf("最大连续上涨不小于0.5%%的天数：%d\n", max);

    return 0;
}
