#include <stdio.h>
int main(){
    int a;
    printf("Enter first number:");
    scanf("%d",&a);
    int b;
    printf("Enter second number:");
    scanf("%d",&b);
    int c;
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("The greatest number is %d",a);
        }
    else if(b>a && b>c){
        printf("The greatest number is %d",b);
    }    
    else{
        printf("The greatest number is %d",c);
    }
    return 0;    
}