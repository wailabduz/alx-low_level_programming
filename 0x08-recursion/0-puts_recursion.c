#include <stdio.h>

void printStringWithNewLine(char *str) {
    printf("%s\n", str);
}

int main() {
    char myString[] = "Hello, World!";
    printStringWithNewLine(myString);
    return 0;
}

