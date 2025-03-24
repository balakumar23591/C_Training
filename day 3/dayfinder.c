// day finder
#include <stdio.h>

int main() {
    int startDay = 1;
    int endDay;
 
    // Prompt user for input
    printf("Enter a number to get the day of the week: ");
    scanf("%d", &endDay);
 
    // Map the number to the day of the week using modulus
    int weekDay = (startDay + endDay) % 7;
 
    if (weekDay == 0) {
        weekDay = startDay;
    }

    // Print the corresponding day
    switch(weekDay) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input!\n");
    }
 
    return 0;
}