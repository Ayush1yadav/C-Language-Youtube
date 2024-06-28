#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("Entered number is divisible 3 and 5");
        }
        else{
            printf("entered number is divisible by 5 but not 3");
        }
    }
    else{
        printf("Entered number is not divisible 5 and 3");
    }
    return 0;
}