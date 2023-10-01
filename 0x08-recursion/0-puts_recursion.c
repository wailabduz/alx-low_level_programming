#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') { // Base case: end of string
        putchar('\n'); // Print a newline character
        return;
    }
    
    putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursive call with the next character
}

int main() {
    char myString[] = "Hello, Recursion!";
    _puts_recursion(myString);
    return 0;
}

