/*
Find the factorial number of the given number
example: i/p:4, op: 24
*/
int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}

#include <stdio.h>
int main(){

    //taking input
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int fact=factorial(num);
    printf("Factorial of %d is: %d.",num,fact);
    return 0;
}