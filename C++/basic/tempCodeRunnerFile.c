#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2.5;
    }
    else if (units <= 200) {
        bill = (100 * 2.5) + ((units - 100) * 3.5);
    }
    else if (units <= 300) {
        bill = (100 * 2.5) + (100 * 3.5) + ((units - 200) * 6.0);
    }
    else { 
        bill = (100 * 2.5) + (100 * 3.5) + (100 * 6.0) + ((units - 300) * 5.5);
    }
    printf("Total units consumed: %d\n", units);
    printf("Electricity Bill: Rs. %.2f\n", bill);
    return 0;
}
