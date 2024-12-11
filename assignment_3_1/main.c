#include <stdio.h>
#define ARRAY_SIZE 10

int minimum(int NumberList[], int NumberCount){
    int min = 10000;int i;
    for (i = 0; i < NumberCount; i++) {if (NumberList[i] < min)min = NumberList[i];}printf(" Minimum: %i \n", min);
}

int maximum(int NumberList[], int NumberCount){
    int max = 1;int i;
    for (i = 0; i < NumberCount; i++) {if (NumberList[i] > max)max = NumberList[i];}printf(" Maximum: %i \n", max);
}

int sum(int NumberList[], int NumberCount){
    int sum = 0;int i;
    for (i = 0; i < NumberCount; i++){sum = sum + NumberList[i];}printf(" Sum: %i \n", sum);
}

float average(int NumberList[], int NumberCount){
    float sum = 0;
    for (int i = 0; i < NumberCount; i++){sum = sum + NumberList[i];} float avg = sum / NumberCount;
    printf(" Average: %g \n", avg);
}

float median(int NumberList[]){
    float mid = NumberList[4] + NumberList[5]; float median = mid / 2;printf("\n Median: %g \n", median);
}


int main() {
    int InputNumbers[ARRAY_SIZE] = {0};

    printf(" Type integers: \n");
    for (int i = 0; i < ARRAY_SIZE; i++) {scanf("%i", &InputNumbers[i]);}

    minimum(InputNumbers, ARRAY_SIZE);
    maximum(InputNumbers, ARRAY_SIZE);
    sum(InputNumbers, ARRAY_SIZE);
    average(InputNumbers, ARRAY_SIZE);

    printf(" Sorted:");
    for (int i = 0; i < ARRAY_SIZE; i++){
        int j, a;
        for (j = i + 1; j < ARRAY_SIZE; j++){ if (InputNumbers[i] > InputNumbers[j])
            {a = InputNumbers[i]; InputNumbers[i] = InputNumbers[j]; InputNumbers[j] = a;}}
        printf(" %i", InputNumbers[i]);}

    median(InputNumbers);

    return 0;
}