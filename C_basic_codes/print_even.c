// QN: Print all even numbers from 0 to N

#include <stdio.h>

int main(){
    int N; //to store input
    printf("Enter the number N: ");
    scanf("%d", &N); 
    //%d is to indicate we are storing integer,
    //&N is address of integer N to store value of the int var in it.
    for(int i=0; i<=N; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    return 0;
}
