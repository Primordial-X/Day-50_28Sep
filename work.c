#include <stdio.h>
#include <string.h>

//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

int main() {
    char date[11]; // Buffer to hold the input date
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%10s", date); // Read the date input

    // Check if the input format is correct
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format. Please use dd/04/yyyy.\n");
        return 1;
    }

    // Change the month from "04" to "Apr"
    char new_date[12]; // Buffer to hold the new date format
    snprintf(new_date, sizeof(new_date) - 1, "%c%c-Apr-%c%c%c%c", 
             date[0], date[1], date[6], date[7], date[8], date[9]);

    printf("Formatted Date: %s\n", new_date);
    return 0;
}


//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

int main() {
    char str[50]; // Buffer to hold the input string
    printf("Enter a string: ");
    scanf("%49s", str); // Read the string input

    int length = strlen(str);
    printf("Sub-strings: ");
    
    // Generate and print all sub-strings
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar(',');
        }
    }
    printf("\n");
    return 0;
}