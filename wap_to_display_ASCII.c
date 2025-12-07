#include <stdio.h>

int main() {
    int i;
    printf("ASCII Table:\n");
    printf("Char\tDec\tHex\tOct\n");
    for (i = 0; i < 128; i++) {
        printf("%c\t%d\t%02X\t%03o\n", (i >= 32 && i <= 126) ? i : ' ', i, i, i);
    }
    return 0;
}