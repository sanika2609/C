#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToDecimal(const char *binaryStr) {
    int decimal = 0;
    int length = strlen(binaryStr);
    for (int i = 0; i < length; i++) {
        if (binaryStr[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

int main() {
    char binaryStr[33]; // Up to 32 bits + null terminator
    printf("Enter a binary number: ");
    scanf("%s", binaryStr);
    int decimal = binaryToDecimal(binaryStr);
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
