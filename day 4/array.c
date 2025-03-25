#include <stdio.h>

int main() {
    
    int numbers[6];
    numbers[0] = 2;
    numbers[1] = 4;
    numbers[2] = 6;
    numbers[3] = 8;
    numbers[4] = 10;
    numbers[5] = 12;
    numbers[6] = 14;

    for (int i = 0; i < 7; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}