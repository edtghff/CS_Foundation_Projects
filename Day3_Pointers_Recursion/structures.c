#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Name: %sAge: %d\n", student.name, student.age);
    return 0;
}
