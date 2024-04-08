#include <stdio.h>
void printEvenOdd(int start, int end) {
    printf("Even numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Odd numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    // Call the function to print even and odd numbers
    printEvenOdd(start, end);
    
    return 0;
}
