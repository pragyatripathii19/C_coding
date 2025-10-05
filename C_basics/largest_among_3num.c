// QN:  Find the largest number among the three numbers.
#include <stdio.h>
int main(){

    //taking input
    int a, b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    //comparing
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("Largest out all 3 is: %d. ", max);
    return 0;

}