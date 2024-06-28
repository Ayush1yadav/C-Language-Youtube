#include<stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c = 1;
    for(int i = 1; i<=n; i=i+1){
    printf("%d fibonacci is %d\n",i,c);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}