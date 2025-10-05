/*
given year is leap year or not?

We want the year to match one of two conditions:
1) Divisible by 400 → always a leap year 
2) Divisible by 4 but not by 100 → also a leap year ]

If neither of those is true →  not a leap year.
*/
#include <stdio.h>
#include <stdbool.h>

int main(){

    int year;
    printf("Enter the year to check leap year: ");
    scanf("%d", &year);
    bool flag=false;

    if(year%400==0){
        flag=true;
    }else if(year%4==0 && year%100!=0){
        flag=true;
    }

    if (flag)
        printf("The given year %d is a leap year.\n", year);
    else
        printf("The given year %d is not a leap year.\n", year);

    return 0;
}