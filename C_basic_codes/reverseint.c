/*
QN: reverse an integer 
example=>  i/p: 1234, o/p: 4321

forming the logic:
rmd: 1234 = 123*10 + 4 (1234 % 10)=4
ans: 4*10 = 40
qt: int(1234/10=123.4)=123

rmd: 123%10= (12*10 + 3)= 3
ans: 40*10 +3*10= 400+30=430
qt: 123/10=12.3=12

rmd=qt%10= 12%10= 1*10+2=2
ans=ans*10+rmd*10= 430*10+ 2*10= 4300+20=4320
qt=qt/10= 12/10= 1.2 =1 (always take low value 123.6= 123 && not 124)

when qt<10; ans+=qt, return ans

*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter the integer number to be reversed: ");
    scanf("%d", &num);
    int rmd=0,ans=0;

    while(num>10){
        rmd=num%10;
        ans=(ans*10)+(rmd*10);
        num=num/10;
    }
    ans+=num;
    printf("Reversed Integer is: %d . ", ans);
    return 0;

}