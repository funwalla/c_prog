#include <stdio.h>

/* Exercise 1-10. Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way
*/

int main() {

    int c, slashFlag;  // c = input chararcter, slashFlag = 1 -> print '\'
    slashFlag = 0;

    while ((c = getchar()) != EOF){
        if (c == '\t'){
            slashFlag = 1;
            c = 't';
        }
         if (c == '\b'){
            slashFlag = 1;
            c = 'b';
        }
        if (slashFlag == 1) {
            putchar('\\');
            slashFlag = 0;
        }
        putchar(c);
    }
}
