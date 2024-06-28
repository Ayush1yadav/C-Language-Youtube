#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter another number: ");
    scanf("%d", &b);
    int reminder = a % b;
    printf("The reminder of %d divided by %d is %d\n", a, b,reminder);
    return 0;
}