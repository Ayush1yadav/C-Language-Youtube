#include <stdio.h>
int main(){
    int a;
    printf("Enter a first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter a second number: ");
    scanf("%d", &b);
    int c;
    printf("Enter a third number: ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("entered number which %d is greatest",a);
        }
        else{
            printf("entered number which %d is greatest",c);
        }
    }
    else{
        if(b>a){
            printf("entered number which %d is greatest",b);
        }
        else{
            printf("entered number which %d is greatest",c);
        }
    }
        return 0;
}