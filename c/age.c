#include <stdio.h>

int is_leap_year(int year) {
    // 判断是否为闰年
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int main() {
    int age, year, total_days = 0;
    int current_year;

    // 输入年龄
    printf("请输入您的年龄: ");
    scanf("%d", &age);

    // 假设当前年份为2024年，可以根据需要调整
    current_year = 2024;

    // 计算总天数
    for (year = current_year - age; year < current_year; year++) {
        if (is_leap_year(year)) {
            total_days += 366;
        } else {
            total_days += 365;
        }
    }

    // 输出结果
    printf("您的年龄相当于%d天（考虑闰年）。\n", total_days);

    return 0;
}
