#include <stdio.h>
#include <unistd.h>

int main() {
    int i = 10;
    while (i >= 0) {

        if (i == 5) {
            printf("%s\n", "Happy New Year!");
            break;
        } else {
            printf("%d\n", i);
        }

        i--;

        // wait for 1 second
        sleep(1);
    }
    return 0;
}