#include <stdio.h>  
#include <stdlib.h>  
  
int isLeapYear(int year) {  
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);  
}  
  
int daysInMonth(int year, int month) {  
    static int daysPerMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  
    if (month == 2 && isLeapYear(year)) {  
        return 29;  
    }  
    return daysPerMonth[month - 1];  
}  
  
long long dateToUnixTimestamp(int year, int month, int day, int hour, int minute, int second, int timezoneOffset) {  
    long long totalSeconds = 0;  
    for (int y = 1970; y < year; y++) {  
        totalSeconds += isLeapYear(y) ? 366LL * 24 * 60 * 60 : 365LL * 24 * 60 * 60;  
    }  
    for (int m = 1; m < month; m++) {  
        totalSeconds += daysInMonth(year, m) * 24 * 60 * 60;  
    }  
    totalSeconds += (day - 1) * 24 * 60 * 60;  
    totalSeconds += hour * 60 * 60;  
    totalSeconds += minute * 60;  
    totalSeconds += second;  
    totalSeconds -= timezoneOffset * 60 * 60; // Convert timezone offset to seconds  
    return totalSeconds;  
}  
  
int main() {  
    int year, month, day;  
    int hour, minute, second;  
    int timezoneOffset;  
  
    printf("Unixʱ���ת����\n");  
    printf("By:ZephyrBD\n"); 
    printf("������ʱ�䣨��ʽ��YYYY/MM/DD HH:MM:SS��������Unixʱ���\n");  
    scanf("%d/%d/%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);  
  
    printf("������ʱ��ƫ�ƣ����磬����ʱ����+8����������ʱ����0����\n");  
    scanf("%d", &timezoneOffset);  
  
    long long timestamp = dateToUnixTimestamp(year, month, day, hour, minute, second, timezoneOffset);  
  
    if (timestamp < 0 || year < 1970) {  
        printf("�����ʱ��������1970��1��1�� 00:00:00������ʱ��ƫ�ƣ�\n");  
    } else {  
        printf("Unixʱ��� = %lld\n", timestamp);  
    }  
  
    system("pause");  
    return 0;  
}
