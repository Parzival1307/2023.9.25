#include <stdio.h>

int main() {
    printf("Please input an integer between 11~999:\n");

    int num = 0;
    int count = 0;
    int m;
   

    if (scanf("%d", &num) == 1) { // Check if the user enters a valid number
        m = num; // Store the original value of num
        
        // Calculate the number of digits
        do {
            num = num / 10;
            count++;
        } while (num != 0);

        printf("The number has %d digits\n", count);

        // Output all digits
        if (count == 3) {
            int hun = m / 100;
            int ten = (m - hun * 100) / 10;
            int one = m - hun * 100 - ten * 10;
            int inv = hun + ten * 10 + one * 10 * 10;

            printf("The hundreds place is %d,\n The tens place is %d,\n The ones place is %d\nThe inversion number is %d\n", hun, ten, one,inv);
        }
        else if (count == 2) {
            int ten = m / 10;
            int one = m - ten * 10;
            int inv = ten + one * 10;
            printf("The tens place is %d,\n The ones place is %d\nThe inversion number is %d\n", ten, one,inv);
        }
        
    }
    else {
        printf("Invalid input. Please enter a valid integer.\n");
    }


    return 0;
}
