#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 2; i<=n-i; i++){
        if(n%i==0){
            printf("%d is not a prime number",n);
        }
        else{
            printf("%d is a prime number",n);
        }
        break;
    }
    }