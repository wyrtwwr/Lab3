#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int header() {
    setlocale(LC_ALL, "RUS");

    int dym;

    float result;

    puts("������� �������� ��� �������:");
}

int main() {
    setlocale(LC_ALL, "RUS");

    int num;
    int num2;
    puts("������� �����:");

    scanf("%d", &num);

    printf("������� �����:\n%d\n", num);

    puts("������� ������ �����:");

    scanf("%d", &num2);

    printf("������� ������ �����:\n%d\n", num2);

    printf("�����:%d\n", num + num2);

    printf("��������:%d\n", num2 - num);

    printf("������������:%d\n", num2 * num);

    printf("�������:%d\n", num2 / num);

    printf("������� �� �������:%d\n", num2 % num);

    
}

