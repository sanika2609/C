#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Assign values to the members of the structure
    printf("Enter student name: ");
    scanf("%s", student1.name);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student marks: ");
    scanf("%f", &student1.marks);

    // Display the information
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
