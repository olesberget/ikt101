#include <stdio.h>

typedef struct {int id;char name[50];int age;} student_t;

void ReadingFromTheFile(){
    FILE *file = fopen("student_read.txt", "r");
    if (file == NULL) {printf("Error opening file.\n");return;}
    student_t student;
    while (fscanf(file, "%d\n%[^\n]\n%d\n", &student.id, student.name, &student.age) != EOF) {
        printf("Student id: %d\n", student.id);
        printf("Name: %s\n", student.name);
        printf("Age: %d\n", student.age);
    }fclose(file);
}

void WritingToTheFile(){
    FILE *file = fopen("student_write.txt", "a");
    if (file == NULL) {printf("Error opening file.\n");return;}
    student_t student;
    printf("Enter student id: ");scanf("%d", &student.id);
    printf("Enter name: ");scanf("%*c%[^\n]", student.name);
    printf("Enter age: ");scanf("%d", &student.age);
    fprintf(file, "%d\n%s\n%d\n", student.id, student.name, student.age);
    fclose(file);
}

int main() {
    int choice;
    do {
        printf("\n1. Read student information from file");
        printf("\n2. Write student information to file");
        printf("\n3. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                ReadingFromTheFile();
                break;
            case 2:
                WritingToTheFile();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}