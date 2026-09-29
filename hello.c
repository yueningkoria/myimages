/*
 * hello.c —— C 语言运行 & 调试环境自检程序
 *
 * 用法：
 *   1. 在 VSCode 里打开 E:\CWorkspace 这个文件夹
 *   2. 按 Ctrl+Shift+B 编译，按 F5 启动调试
 *
 * 调试练习：在第 21 行（sum += i;）按 F9 打断点，然后 F5，
 *           左侧「变量」面板可以看到 i 和 sum 的变化，
 *           顶部工具条可以「单步跳过(F10)」「继续(F5)」。
 */

#include <stdio.h>
#include <windows.h>   /* 仅用于设置控制台编码，让中文正常显示 */

/* 计算 1 + 2 + ... + n */
int sum_to(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);   /* 控制台按 UTF-8 输出，中文不乱码 */

    printf("你好，C 语言！\n");
    printf("VSCode + MinGW-w64(gcc/gdb) 环境已就绪。\n\n");

    int n = 100;
    int total = sum_to(n);
    printf("1 + 2 + ... + %d = %d\n\n", n, total);

    /* 一个小数组，方便在调试器里观察数组内容 */
    int nums[] = { 3, 1, 4, 1, 5, 9, 2, 6 };
    int count = sizeof(nums) / sizeof(nums[0]);
    int max = nums[0];

    for (int i = 1; i < count; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    printf("数组元素：");
    for (int i = 0; i < count; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n最大值：%d\n", max);

    return 0;
}
