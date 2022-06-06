#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char buffer[81];
    int i, ch;

    for (i = 0; (i < 80) && ((ch = getchar()) != EOF) && (ch != '\n'); i++) {
        buffer[i] = (char)ch;
    }

    buffer[i] = '\0';
    printf("Input was: %s\n", buffer);

    _getch();
    return 0;
}