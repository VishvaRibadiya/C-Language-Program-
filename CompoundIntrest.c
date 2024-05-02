#include <stdio.h>
#include <math.h>


int main() {
    float p, r, t, compound_interest, earned_interest, total_amount;

    // Input principal amount, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &r);

    printf("Enter time (in years): ");
    scanf("%f", &t);

    // Calculate compound interest
    compound_interest = p * pow((1 + r / 100), t);

    // Calculate earned interest
    earned_interest = compound_interest - p;

    // Calculate total amount
    total_amount = p + earned_interest;

    // Display the results
    printf("Principal Amount: %.2f\n", p);
    printf("Earned Interest: %.2f\n", earned_interest);
    printf("Total Amount after Interest: %.2f\n", total_amount);

    return 0;
}