#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { char name[50]; int age; } Student;

int main() {
    int count = 0, capacity = 10;
    Student *students = malloc(capacity * sizeof(Student));
    Student youngest, oldest;

    printf("To stop application type 'stop'");
    while (1) {
        printf("\nType name:"); fgets(students[count].name, 50, stdin);
        students[count].name[strcspn(students[count].name, "\n")] = '\0';
        if (strcmp(students[count].name, "stop") == 0) {if (count == 0) {printf("No students were given\n");break;}break;}

        printf("\nType age:"); scanf("%d", &students[count].age);

        while (getchar() != '\n');
        if (count == 0 || students[count].age < youngest.age) {youngest = students[count];}
        if (count == 0 || students[count].age > oldest.age) {oldest = students[count];}

        count++;
        if (count == capacity) {capacity *= 2;Student *temp = realloc(students, capacity * sizeof(Student));
            if (!temp) {fprintf(stderr, "Memory reallocation failed.\n");break;}students = temp;}
    }

    if (count > 0) {
        printf("Count: %d\n", count);
        for (int i = 0; i < count; ++i) {printf("Name = %s, Age = %d\n", students[i].name, students[i].age);}
        printf("Youngest: %s\n", youngest.name);
        printf("Oldest: %s\n", oldest.name);
    }

    free(students);
    return 0;
}