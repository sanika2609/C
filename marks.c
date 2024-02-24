#include <stdio.h>

int main() {
  
    int subject1 = 85;
    int subject2 = 90;
    int subject3 = 45;
    int totalMarks = subject1 + subject2 + subject3
    float averageMarks = (float)totalMarks / 3;
    printf("Subject 1: %d\n", subject1);
    printf("Subject 2: %d\n", subject2);
    printf("Subject 3: %d\n", subject3);
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
