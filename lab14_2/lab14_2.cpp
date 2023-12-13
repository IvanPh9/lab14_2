#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main() {
    setlocale(LC_CTYPE, "ukr"); //Українізація
    int size;
    do {//Цикл з після умовою для введення розміру більшого за 0
        printf("Введiть розмiр масиву: ");
        scanf_s("%d", &size);
    } while (size <= 0);

    int* arr = (int*)malloc(size * sizeof(int)); //Створення динамічної комірки пам'яті для масиву елементів

    printf("Введiть елементи масиву:\n");
    for (int i = 0; i < size; ++i) {// Введення елементів масиву
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    double sum = 0;
    int* ptr = arr;  // Вказівник на перший елемент масиву

    for (int i = 0; i < size; ++i) {
        sum += *ptr;  // Додавання значення, на яке вказує вказівник
        ptr++;       // Перехід до наступного елементу масиву за допомогою адресної арифметики
    }

    // Обчислення середнього значення та виведення результату
    double average = sum / size;
    printf("Середнє значення елементiв масиву: %.2lf\n", average);
    free(arr);
    return 0;
}
