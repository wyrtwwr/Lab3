#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define      A       1.852 //������� ����
#define      B       1.609 //���������� ����
#define      C       1475 //������� ����
#define      D       7.468 //������������ ����
#define      I       7412.6 //�������������� ����

int main() {

    setlocale(LC_ALL, "RUS");

    int dym;

    float resultA;
    float resultB;
    float resultC;
    float resultD;
    float resultI;

    puts("������� �������� ��� �������:");

    scanf("%d", &dym);

    resultA = A * dym;
    resultB = B * dym;
    resultC = C * dym;
    resultD = D * dym;
    resultI = I * dym;

    printf("%d ���� � ��� ������� ���� % .4f ��\n", dym, resultA);
    printf("%d ���� � ��� ���������� ���� % .4f ��\n", dym, resultB);
    printf("%d ���� � ��� ������� ���� % .4f ��\n", dym, resultC);
    printf("%d ���� � ��� ������������ ���� % .4f ��\n", dym, resultD);
    printf("%d ���� � ��� �������������� ���� % .4f ��\n", dym, resultI);
}
