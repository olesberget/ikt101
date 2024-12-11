#include <stdio.h>

int main() {
    float i = 1;
    float MathNumbers = 0;
    float NumbersSummarized = 0;
    float NumberCount = -1;

    printf("Type numbers, if you want to exit the application type '0'\n");

    while(i != 0){
        printf("\nNumber:");
        scanf("%g", &MathNumbers);
        i = MathNumbers;
        NumberCount++;
        NumbersSummarized = NumbersSummarized + MathNumbers;
    } float TheNumberAverage = NumbersSummarized / NumberCount;

    printf("\nCount: %g", NumberCount);
    printf("\nSum: %g", NumbersSummarized);
    printf("\nAverage: %g", TheNumberAverage);

    return 0;
}
