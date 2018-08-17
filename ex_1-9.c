#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank
*/

int main() {

    int c, acc;  // c = input chararcter, acc = accumulator

    acc = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++acc;
            continue;
        }
        else {
            if (acc > 0){
                putchar(' ');
                acc = 0;
            }
            putchar(c);
        }
    }
}
