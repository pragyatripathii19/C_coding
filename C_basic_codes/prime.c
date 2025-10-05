//print all prime numbers upto N 
//SOME FACTS: 0 and 1 are not prime; 2 is the smallest prime number
// prime numbers are those that are ONLY divisble by 1 and no. itself

#include <stdio.h>
#include <stdbool.h>

int main(){

    //getting input
    int N;
    printf("Enter number N: ");
    scanf("%d", &N);

    bool flag=true;
    for(int i=2; i<=N; i++){
        flag=true;
        for(int j=2; j<=i; j++){
            if(i!=j && i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            printf("%d ",i);
        }
    }
    return 0;

}