# Домашнее задание к работе 3
## Условие задачи
Написать и отладить программу расчета стоимости покупки (Вводится кол-во и стоимость единицы товара).
## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. ввод входных данных:
   - `kolvo`  — количество товара.
   - `price`  —  цена за единицу.
   - `total`  — общая стоимость.  
3. Считаем:
    `kolvo * price`
4. Выводим результаты расчетов:
   - `printf("Общая стоимость покупки: %.2f\n", total);`
5. **Конец**

### Блок-схема
<img width="122" height="421" alt="Диаграмма без названия drawio" src="https://raw.githubusercontent.com/wyrtwwr/email-assets/refs/heads/main/Lab3.drawio.png" />

## 2. Реализация программы
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int kolvo;         // количество товара
    float price, total;   // цена за единицу и общая стоимость
    printf("Введите количество товара: ");
    scanf("%d", &kolvo);
    printf("Введите цену за единицу товара: ");
    scanf("%f", &price);
    total = kolvo * price;
    printf("Общая стоимость покупки: %.2f\n", total);

}

## 3. Результаты работы программы

Введите количество товара: 5
Введите цену за единицу товара: 245
Общая стоимость покупки: 1225,00

<img  src="https://raw.githubusercontent.com/wyrtwwr/email-assets/refs/heads/main/photo_2025-09-21_21-30-04.jpg" width="981" height="266">
