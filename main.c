#include <stdio.h>

int main (void) {
    double num1, num2;
    char operator;
    printf("\033[0;35m");
    printf("Hesap Makinesi\n");
    printf("İki sayı girin: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Yapmak istediğiniz işlemi seçin (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("\033[0;33m");
    switch (operator) {
        case '+':
            printf("Sonuç: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Sonuç: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Sonuç: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Sonuç: %.2lf\n", num1 / num2);
            } else {
                printf("Hata: Bir sayı sıfıra bölünemez.\n");
            }
            break;
        default:
            printf("Geçersiz işlem seçtiniz.\n");
    }
    return 0;
}