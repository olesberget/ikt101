#include <stdio.h>
#include <stdlib.h>

    int compareStrings(const void *a, const void *b) {return (*(int *) a - *(int *) b);}

    int main() {
        int count, *array = malloc(count * sizeof(int));

        printf("Type amount of numbers: \n"); scanf("%i", &count);
        if (count == 0) {printf("No numbers were given"); return 0;}
        else {printf("Count: %i\n", count);}

        for (int i = 0; i < count; ++i) {printf("Type in %i numbers:\n", count);scanf("%i", &array[i]);}

        printf("\nNumbers: "); for (int i = 0; i < count; ++i) {printf("%i ", array[i]);}

        qsort(array, count, sizeof(int), compareStrings);

        printf("\nSorted: "); for (int i = 0; i < count; ++i) {printf("%i ", array[i]);}

        free(array);

        return 0;
    }
