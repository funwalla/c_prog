#include <stdio.h>

/* count lines in input */
int main() {
    int c, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ') ++blanks;
        if (c == '\t') ++tabs;
        if (c == '\n') ++newlines;
    }
    printf("blanks:\t\t%d\ntabs:\t\t%d\nnewlines:\t%d\n",
            blanks, tabs, newlines);
}
