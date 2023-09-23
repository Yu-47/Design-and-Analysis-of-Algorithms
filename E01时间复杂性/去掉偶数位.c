int findNumber(int n) {
    if (n == 1) {
        return 1; // 如果n为1，直接返回1
    } else {
        // 递归调用，去掉奇数序号的数
        return 2 * findNumber(n / 2);
    }
}