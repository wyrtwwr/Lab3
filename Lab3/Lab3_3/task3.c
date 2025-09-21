#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define      A       1.852 //морска€ мил€
#define      B       1.609 //сухопутна€ мил€
#define      C       1475 //римска€ мил€
#define      D       7.468 //старорусска€ мил€
#define      I       7412.6 //географическа€ мил€

int main() {

    setlocale(LC_ALL, "RUS");

    int dym;

    float resultA;
    float resultB;
    float resultC;
    float resultD;
    float resultI;

    puts("введите значение дл€ расчета:");

    scanf("%d", &dym);

    resultA = A * dym;
    resultB = B * dym;
    resultC = C * dym;
    resultD = D * dym;
    resultI = I * dym;

    printf("%d мил€ Ц это морска€ мил€ % .4f см\n", dym, resultA);
    printf("%d мил€ Ц это сухопутна€ мил€ % .4f см\n", dym, resultB);
    printf("%d мил€ Ц это римска€ мил€ % .4f см\n", dym, resultC);
    printf("%d мил€ Ц это старорусска€ мил€ % .4f см\n", dym, resultD);
    printf("%d мил€ Ц это географическа€ мил€ % .4f см\n", dym, resultI);
}
