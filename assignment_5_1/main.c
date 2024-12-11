#include <stdio.h>

typedef struct{int student_id;char name[50];int age;} student_t;

int main() {
    student_t Student;

    printf("Student id: ");   scanf("%d", &Student.student_id);
    printf("\nName: ");       scanf(" %[^\n]s", &Student.name);
    printf("\nAge: ");        scanf("%d", &Student.age);

    printf("\nStudent id: %d", Student.student_id);
    printf("\nName: %s", Student.name);
    printf("\nAge: %d", Student.age);

    return 0;
}
