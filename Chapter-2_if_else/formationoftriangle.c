#include <stdio.h>
int main(){
    int a;
    printf("Enter first side of trangle: ");
    scanf("%d", &a);
    int b;
    printf("Enter second side of trangle: ");
    scanf("%d", &b);
    int c;
    printf("Enter third side of trangle: ");
    scanf("%d", &c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Triangle is valid");
        }
        else{
            printf("Triangle is not valid");
            }
            return 0;
}