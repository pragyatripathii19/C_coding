// Write a C program to calculate Compound Interest.
/*
CI FORMULA:

            A=P*(1+r/100)^t;
A=principle+interest
P=principle
r=rate of interest in percentage (5% will be 0.05)
t=time in years
                    CI= A-P
Example: You invest $1000 at 5% annual interest, compounded yearly, for 3 years.
Solution: The compound interest earned is $157.63 (rounded).
*/
#include <stdio.h>
#include <math.h>
int main(){

    //inputs
    float P, r, t;
    printf("Enter Principle Amount: ");
    scanf("%f", &P);
    printf("Enter Rate of interest (%%): ");
    scanf("%f", &r);
    printf("Enter Time (yrs): ");
    scanf("%f", &t);

    //calculations
    float amount=P*(pow((1+(r/100.0)),t));
    float CI=amount-P;
    printf("Caculated CI: %.2f .", CI);
    return 0;

}