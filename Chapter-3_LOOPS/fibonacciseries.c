#include<stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int c = 1;
    for(int i = 1; i<=n-2; i=i+1){
        c = a+b;
        a = b;
        b = c;
    }
    printf("%d",c);
    return 0;
}