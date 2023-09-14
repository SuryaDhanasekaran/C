#include <stdio.h>
#include <limits.h>

int divideUsingBitwise(int dividend, int divisor) {
    // Handle special cases: division by zero and overflow
    if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
        return INT_MAX;
    }

    // Determine the sign of the result
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    // Make both dividend and divisor positive
    unsigned int udividend = dividend < 0 ? -dividend : dividend;
    unsigned int udivisor = divisor < 0 ? -divisor : divisor;

    // Initialize the quotient
    int quotient = 0;

    // Perform bitwise division
    while (udividend >= udivisor) {
        int temp_divisor = udivisor;
        int multiple = 1;

        while (udividend >= (temp_divisor << 1)) {
            temp_divisor <<= 1;
            multiple <<= 1;
        }

        udividend -= temp_divisor;
        quotient += multiple;
    }

    // Apply the sign to the result
    quotient *= sign;

    return quotient;
}

int main() {
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    int result = divideUsingBitwise(dividend, divisor);
    printf("Result of division: %d\n", result);

    return 0;
}
