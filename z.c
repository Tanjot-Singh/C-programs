#include <stdio.h>

const char* get_day_of_week(int h) {
    switch(h) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int zellers_congruence(int year) {
    int month = 13;  // January is treated as month 13
    int q = 1;       // January 1st
    int K = year % 100;  // Last two digits of the year
    int J = year / 100;  // First two digits of the year
    
    // Apply Zeller's Congruence formula
    int h = (q + (13 * (month + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    return h;
}

int main() {
    int year;
    
    // Input year
    printf("Enter year: ");
    scanf("%d", &year);
    
    // Zeller's congruence to find the day of the week
    int h = zellers_congruence(year - 1);  // Adjust year for January (previous year)
    
    // Output the day of the week
    printf("January 1st of %d is a %s.\n", year, get_day_of_week(h));
    
    return 0;
}
