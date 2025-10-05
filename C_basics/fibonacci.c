/*
QN: Write a program in C to print the Fibonacci series upto N.
fibonacci series:
(1 1 2 3 5 8 13 21 34) or (0 1 1 2 3 5 8 13 21 34)
*/
#include <stdio.h>
void myfib(int pre, int next, int limit){
    if((pre+next)>limit){
        return;
    }
    printf("%d ", pre+next);
    myfib(next,pre+next, limit);
}
int main(){
    //taking input
    int N;
    printf("Enter the number N: ");
    scanf("%d", &N);

    //using INTERATION!!
    printf("---Using INTERATION method---\n");

    int pre=0, next=1, curr=0;
    printf("0 1 ");
    while((pre+next)<=N){
        curr=pre+next;
        printf("%d ", curr);
        pre=next;
        next=curr;
    }

    printf("\n");
    printf("---Using RECURSION method---\n");
    printf("0 1 ");
    myfib(0,1,N);
    return 0;

}

